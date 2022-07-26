#include "main.h"


/**
 * str_concat - concate two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer of array
 */
char *str_concat(char *s1, char *s2)
{

	char *strout;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		sl = "";
	if (s2 == NULL)
		S2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strout = malloc(sizeof(char) * (i + j + 1));
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];
	return (strout);
}
