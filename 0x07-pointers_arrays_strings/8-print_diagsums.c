#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal sum
 *
 * @a: a pointer points
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int g, sumg1 = 0, sumg2 = 0;

	for (g = 0; g < size; g++)
	{
		sumg1 += *(a + (size * g + g));
		sumg2 += *(a + (size * g + size - 1 - g));
	}
	printf("%d, ", sumgl);
	printf("%d\n", sumg2);
}
