#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - byte
 * @s: pointer to character
 *
 * @accept: pointer to character
 *
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
