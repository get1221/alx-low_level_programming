#include "main.h"
#include "stdio.h"
/**
 * reverse_array - function reverse an array of integer
 * @a: delclare array
 * @n: element of array
 */
void reverse_array(int *a, int n)
{
	int g;
	int b;

	g = 0;

	while (g < n)
	{
		n--;
		b = a[g];
		a[g] = a[n];
		a[n] = b;
		g++;
	}
}
