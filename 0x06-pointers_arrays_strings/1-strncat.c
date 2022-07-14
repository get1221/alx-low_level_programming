#include "main.h"
#include "string.h"
/**
 * _strncat - function concate two strings
 *
 * @src: source
 *
 * @dest: destination
 *
 * @n: integer
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int in = strlen(dest);
	int g = 0;

	while (g  < n && *src)
	{
		dest[in + g] = *src;
		src++;
		g++;
	}
	dest[in + g] = '\0';
	return (dest);
}
