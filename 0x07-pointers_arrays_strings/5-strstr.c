#include "main.h"
/**
 * _strstr - function to locate
 *
 * @haystack: pointer to character
 *
 * @needle: pointer to character
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = haystack, *funneedle = needle;

		while (*haystack)
		{
			while (*needle)
			{
				if (*haystack++ != *needle++)
				{
					break;
				}
			}
			if (!*needle)
			{
				return (res);
			}
			needle = funneedle;
			res++;
			haystack = res;
		}
	return (0);
}
