#include "main.h"
/**
 * puts2 - print every other character 
 * @str: the string
 */
void puts2(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		if (g % 2 == 0)
			_putchar(str[g]);
	}
	g++;
}
_putchar('\n');
}
