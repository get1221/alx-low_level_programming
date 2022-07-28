#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the char
 * @c: the character
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
