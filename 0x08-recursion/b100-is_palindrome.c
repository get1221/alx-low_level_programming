#include "main.h"
/**
 * _strlen_recursion - size
 * @s: pointer
 * Return: rec
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pl - palindrome
 * @s: pointer
 * @l: pos
 * Return: pal
 */
int pl(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (pl(s + 1, 1 - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: Recu
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
