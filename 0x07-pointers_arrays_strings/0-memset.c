#include "main.h"
/**
 * _memset - set memory
 * @s: pointer s
 * @b: change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
