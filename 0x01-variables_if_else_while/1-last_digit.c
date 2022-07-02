#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/*
 * main Entry point
 *
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) == 0)	
printf("last digit of %d 0\n", n, n % 10);
else if ((n % 10) > 5)
printf("last digi of %d greaterthan 5\n", n, n % 10);
else	
printf("the last digit of %d lessthan 6 and not 0\n", n, n % 10);
return (0);
}
