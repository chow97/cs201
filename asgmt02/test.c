#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define SEED 35791246

int main(int argc,char* argv[])

{

int iter=0;

double x,y;

int i,count=0;

double z;

double pi;

printf("Enter the number of iterations used to estimate pi: ");

scanf("%d",&iter);

srand(SEED);

count=0;

for(i=0;i<iter;i++){

x=(double)drand48()/RAND_MAX;

y=(double)drand48()/RAND_MAX;

z=x*x+y*y;

if(z<=1) count++;

pi=(double)count/iter*4;

printf("/n# of trials=%d,estimate of pi is %g ",iter,pi);

}

}
