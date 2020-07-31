// Numbers from command line arguments are sent to child process
// from parent process one at a time through pipe.
//
// Child process adds up numbers sent through pipe.
//
// Child process returns sum of numbers to parent process.
//
// Parent process prints sum of numbers.

#include <stdio.h>

int main(int argc, char **argv)
{
	// set up pipe

	// call fork()

	printf("CS201 - Assignment 3 Regular - I. Forgot\n");

	if (0 /* replace 0 with test for parent vs child, delete this comment */) {
		// -- running in child process --
		double	sum = 0;

		// Receive numbers (doubles) from parent process via pipe
		// one at a time, and add them up.

		// Return sum of numbers, converted to int.
		return sum;
		}
	else {
		// -- running in parent process --
		int		sum = 0;

		// Send numbers (datatype: double, 8 bytes) from command line arguments
		// starting with argv[1] one at a time through pipe to child process.

		// Wait for child process to return. Reap child process.
		// Receive sum of numbers (as an int) via the value returned when
		// the child process is reaped.

		printf("sum = %d\n", sum);
		return 0;
		}
}
