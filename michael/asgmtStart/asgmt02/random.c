// how to use srand48() and drand48()

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double	n1, n2;

	srand48(0);
	n1 = drand48();
	n2 = drand48();
	printf("n1 = %f\n", n1);
	printf("n2 = %f\n", n2);

	return 0;
}
