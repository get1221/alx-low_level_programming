#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 *
 * @a: the array
 * @n: array length
 */
void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		printf("%d", a[g]);
		if (g < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
