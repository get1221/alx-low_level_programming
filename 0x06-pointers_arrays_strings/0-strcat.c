#include "main.h"
#include "string.h"
/**
 * _strcat - function concat two strings
 * @src: source
 * @dest: destination
 * Return: concat
 */
char *_strcat(char *dest, char *src)
{
	int in = 0;

	len = strlen(dest);
	while (src[in] != '\0')
	{
		dest[len] = src[in];
		len++;
		in++;
	}
	dest[len] = '\0';
	return (dest);
}
