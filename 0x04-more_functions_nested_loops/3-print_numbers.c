#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * Return: numbers
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
