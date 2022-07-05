#include "main.h"
/**
 * print_last_digit - print the last digit
 * @h: integer
 * Return: integer h
 */
int print_last_digit(void)
{
	int g;

	if (h < 0)
		h = -h;
	g = h % 10;
	if (g < 0)
		g = -g;
	_putchar(g + '0');
	return (g);
}
