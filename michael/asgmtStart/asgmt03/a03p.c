// Child sets Rounding Control field of FPU Control Word to 10
// (towards +infinity).
//
// Numbers (doubles) from command line arguments are sent
// to child process from parent process one at a time through pipe.
//
// Child process adds up numbers sent through pipe.
//
// Child uses frndint instruction to round sum to next highest
// integer.
//
// Child process returns rounded sum to parent process as an int.
//
// Parent process prints sum of numbers.

#include <stdio.h>

int main(int argc, char **argv)
{
	// set up pipe

	// call fork()

	printf("CS201 - Assignment 3 Premium - I. Forgot\n");

	if (0 /* replace 0 with test for parent vs child, delete this comment */) {
		// -- running in child process --
		double	sum = 0;

		// Receive numbers from parent process via pipe one at a time.
		// Add them up, rounded to next highest integer value.

		// Return sum of numbers, rounded up to next integer value.
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
