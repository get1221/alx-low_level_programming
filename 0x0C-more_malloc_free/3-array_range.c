#include <stdlib.h>
#include "main.h"
/**
 * array_range - create an array
 * @min: min value
 * @max: max
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int rage, i,
	    int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
