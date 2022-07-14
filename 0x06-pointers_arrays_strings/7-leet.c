#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 *
 */
char *leet(char *s)
{
	int g;
	int h;
	int b;
	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	g = 0;

	while (s[g] != '\0')
	{
		h = 0;
		b = 0;
		while (l[h] != '\0')
		{
			if (s[g] == l[h])
			{
				b = h;
				s[g] = e[b];
			}
			h++;
		}
		g++;
	}
	return (s);
}

