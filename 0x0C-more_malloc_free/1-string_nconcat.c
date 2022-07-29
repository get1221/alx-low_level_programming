#include "main.h"

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
	int i;
	unsigned int j;

	if (s1 == NULL) /* ACC FOR NULL STR*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	i++;
	ptr = malloc(sizeof(*comb) * (i + n));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
