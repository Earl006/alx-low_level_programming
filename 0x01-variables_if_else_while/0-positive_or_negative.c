#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main _ A program that takes a random number n and uses if else to get value
 * Returns: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{
printf("%d is positive\n",n);
}
else if(n==0)
{
printf("%d is zero\n",n);
}
else if(n<0)
{
printf("%d is negative\n",n);
}
return (0);
}
