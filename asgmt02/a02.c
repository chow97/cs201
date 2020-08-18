#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	int i, in, out = 0;
	int darts  = atof(argv[1]);
	double x, y, pi;
	printf("CS 201 - Assignment 2 - Ka Hoo Chow\n");

	srand48(0);

	while(i < darts)
	{
		x = drand48();
		y = drand48();
		if(sqrt(pow(x,2) + pow(y,2)) <= 1)
		{
			in++;
		}

		pi = 4.0 * in / darts;
		
		i++;
	}
	printf("%i darts : pi = %f \n", darts, pi);

	
	return 0;
}
