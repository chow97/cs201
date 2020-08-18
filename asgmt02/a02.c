#include <stdio.h>
#include <stdlib.h>

double pythagorean(double x, double y)
{
	double	distance;

	asm(							// contents of fp stack:
		"	fldl	%[x]		\n"	// x ...
		"	fld		%%st		\n"
		"	fmulp				\n"

		"	fldl	%[y]		\n"	// y x ...
		"	fld		%%st		\n"
		"	fmulp				\n"

		"	faddp				\n"	// distance ...
		"	fsqrt				\n"
		"	fstpl	%[distance]	 	\n"	// ...

		:	[distance]	"=m"	(distance)	// outputs
		:	[x]		"m"		(x),	// inputs
			[y]		"m"		(y)
	);

	return distance;
}

int main(int argc, char **argv)
{
	int i = 0; 
	int in = 0;
	int darts  = atof(argv[1]);
	double x, y, pi, distance;
	printf("CS 201 - Assignment 2 - Ka Hoo Chow\n");

	srand48(0);

	while(i < darts)
	{
		x = drand48();
		y = drand48();
		distance = pythagorean(x, y);
		if(distance <= 1)
		{
			in++;
		}

		i++;
	}
		
	pi = 4.0 * in / darts;
	printf("%i darts : pi = %.10f \n", darts, pi);

	
	return 0;
}
