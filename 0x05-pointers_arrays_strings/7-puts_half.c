#include "main.h"
/**
 * puts_half -print the 2nd half
 *
 * @str: string
 */
void puts_half(char *str)
{
	int len, g, h;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	g = (len - 1) / 2;
	for (h = g + 1; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
