// Numbers from command line arguments are sent to child process
// from parent process one at a time through pipe.
//
// Child process adds up numbers sent through pipe.
//
// Child process returns sum of numbers to parent process.
//
// Parent process prints sum of numbers.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


static int comm[2];

int main(int argc, char **argv)
{
	pid_t pid;
	int i;
	// set up pipe
	if (pipe(comm)) {
		printf("Pipe Error\n");
		return -1;
	}

	printf("CS201 - Assignment 3 Regular - Ka Hoo Chow\n");

	// call fork()
	pid = fork();

	if (pid == 0) {
		// -- running in child process --
		double	sum = 0;
		// Receive numbers (doubles) from parent process via pipe
		// one at a time, and add them up.
		for (i = 1; i < 4; i++){
			read(comm[0], argv[i], sizeof(double));
			sum += atof(argv[i]);
		}
		close(comm[0]);
		// Return sum of numbers, converted to int.
		return sum;
		}
	else {
		// -- running in parent process --
		int		sum = 0;
		// Send numbers (datatype: double, 8 bytes) from command line arguments
		// starting with argv[1] one at a time through pipe to child process.
		for (i = 1; i < argc; i++){
			write(comm[1], argv[i], sizeof(double));	
		}
		close(comm[1]);
		// Wait for child process to return. Reap child process.
		// Receive sum of numbers (as an int) via the value returned when
		// the child process is reaped.
		int status;
		wait(&status);
		sum = WEXITSTATUS(status);
		printf("sum = %d\n", sum);
		return 0;
		}
}
