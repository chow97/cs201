#include <stdio.h>
#include <stdlib.h>

// demonstrates three different ways to generate
// the negative of a two's complement integer value
int main (int argc, char** argv)
{
    int     x = argc == 1 ? 3 : atoi(argv[1]);

    printf("x = %d\n", x);

    // negative via sign
    x = -x;
    printf("x = %d\n", x);

    // negative via multiplication
    x *= -1;
    printf("x = %d\n", x);

    // negative by flipping all bits and then adding 1
    x = ~x;
    x += 1;
    printf("x = %d\n", x);

    return 0;
}

