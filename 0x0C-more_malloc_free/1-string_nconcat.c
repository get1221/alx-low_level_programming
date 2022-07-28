#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string len
 * @string: string
 * Return: string len
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concate atring 1 and n bytes of string 2
 * @s1: string 1
 * @s2: string 2
 * @n: n byte to concate
 * Return: pointer to concate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* ACC FOR NULL STR*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* acc for negative byte*/
		return (NULL);
		if (num >= _strlen(s2)) /* string*/
			num = _strlen(s2);
		len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL);
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
