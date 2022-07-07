#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print num from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int g;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
