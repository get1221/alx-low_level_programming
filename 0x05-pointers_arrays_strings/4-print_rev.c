#include "main.h"
/**
 * print_rev - print reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int g = 0;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (g = len - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
