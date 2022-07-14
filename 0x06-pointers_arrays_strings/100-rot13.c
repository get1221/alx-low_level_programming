#include "main.h"

/**
 * rot13 - a function that encode a string using rot13
 * @s: string
 * Return: string encode
 */
char *rot13(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		while ((s[g] >= 'a' && s[g] <= 'z' ||
					(s[i] >= 'A' && s[i] <= 'Z'))
				{
				if ((s[g] >= 'a' && s[g] <= m) ||
						(s[g] >= 'A' && s[g] <= 'M'))
				s[g] += 13;
				else
				s[g] -= 13;
				g++;
				}
				g++;
				}
				return (s);
				}
