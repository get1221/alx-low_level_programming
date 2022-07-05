#include "main.h"
/**
 * print_alphabet_x10 - function
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int g = 0;

	while (g < 10)
	{
		char a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		g++;
	}
}
