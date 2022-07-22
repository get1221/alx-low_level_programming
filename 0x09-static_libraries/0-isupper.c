#include "main.h"
#include <stdio.h>
/**
 * _isupper - uppercase letter
 * @c: character c
 * Return: Always sucess
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
