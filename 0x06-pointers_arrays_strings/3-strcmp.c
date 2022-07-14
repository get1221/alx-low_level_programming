#include "main.h"
#include<stdio.h>
/**
 * _strcmp - compare strings function
 *
 * @s1: string 1
 * @s2: string 2
 * Return: res
 */
int _strcmp(char *s1, char *s2)
{
	int compare = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		compare = *s1 - *s2;
	return (compare);
}
