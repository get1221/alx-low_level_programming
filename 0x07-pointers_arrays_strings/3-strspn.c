#include "main.h"
/**
 * _strspn - gets the length of substring
 *
 * @s: string substring looks
 *
 * @accept: substring the acc character
 * Return: length of occur
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	char *h = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				g++;
				break;
			}
		if (!(*--accept))
			break;
		accept = h;
	}
	return (g);
}
