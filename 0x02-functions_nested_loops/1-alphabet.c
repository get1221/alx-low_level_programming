#include "main.h"
/**
 * main - print alphabet
 * Return: always 0.
 */
void print_alphabet(void)
{
	char getalpa = 'a';

	while (getalpa <= 'z')
	{
		_putchar (getalpa);
		getalpa++;
	}
	_putchar('\n');
}
