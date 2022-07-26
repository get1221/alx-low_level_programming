#include"main.h"
/**
 * _puts - prints a string followed by new line
 * @str: the string
 */
void _puts(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
