#include "main.h"
/**
 * rev_string - reverse a string 
 * @s: the string
 */
void rev_string(char *s)
{
	int len, g,h;
	char o,p;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	g = len - 1;
	h = 0;
	while (g > h)
	{
		o = s[h];
		p = s[g];
		s[h]= p;
		s[g] = o;
		g--;
		h++;
	}
}
