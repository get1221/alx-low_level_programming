#include "main.h"
/**
 * *_strcpy - two word
 * @dest: pointer to char
 * @src: pointer to char
 * Return: number
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

		dest[i] = '\0';
		return (dest);
}
}
}
