#include <unistd.h>
/**
 * _putchar - write the character
 *
 * @c: the char
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
