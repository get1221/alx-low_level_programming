#include "main.h"
/**
 * _strlen -len of string
 * @s: the length of string
 * Return: char s length
 */
int _strlen(char *s)
{
	int g;

	int len = 0;
	for (g = 0; s[g] != '\0'; g++)
	{
		len++;
	}
	return (len);
}
