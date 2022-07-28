#include <stdlib.h>
/**
 * malloc_checked - allocate mem
 * @b: size
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
