#include "main.h"
#include<stdio.h>
/**
 * string_toupper - function change to uppercase
 * @n: change character
 * Return: n
 */

char *string_toupper(char *n)
{
	int g;

	g = 0;

	while (n[g] != '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
			n[g] = n[g] - 32;
		g++;
	}
	return (n);
}

