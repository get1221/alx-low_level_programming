#include "main.h"
/**
 * _islower - check the code
 *@c: letter
 * Return: Alaways 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}