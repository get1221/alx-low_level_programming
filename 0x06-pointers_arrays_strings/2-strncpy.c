#include "main.h"
#include<stdio.h>
/**
 * _strncpy - copy string
 * @src: source
 * @dest: destination
 *
 * @n: number
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int g;

	g = 0;

	while (src[g] != '\0' && g < n)
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
