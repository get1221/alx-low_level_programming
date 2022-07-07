#include "main.h"
/**
 * largest_number - returns the largest number
 * @a: first num
 * @b: sec num 
 * @c: third num
 * Return: number largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >=b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
