#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion -lenght of string
 *
 * @s: pointer to string
 *
 * Return: string reverse
 */

int _strlen__recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
