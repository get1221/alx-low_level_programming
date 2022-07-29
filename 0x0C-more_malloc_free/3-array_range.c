#include "main.h"
/**
 * array_range - create an array
 * @min: min value
 * @max: max
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int rage, i;
	    int *p;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	p = malloc(range * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range && min <= max; i++, min++)
		*(p + i) = min;
	return (p);
}
