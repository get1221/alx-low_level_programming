#include "main.h"
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

	while (*g)
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
