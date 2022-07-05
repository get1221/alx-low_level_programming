#include "main.h"
/**
 * print_last_digit - print the last digit
 * @h: integer
 * Return: int value 
 */
int print_last_digit(int h)
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
