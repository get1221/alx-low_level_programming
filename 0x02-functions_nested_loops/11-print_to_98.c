#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from 0-98
 * @b: integer
 */
void print_to_98(int b)
{
	int g, h;
	if (b <= 98)
	{
		for (g = b; g <= 98; g++)
		{
			if (g != 98)
				printf("%d, ",g);
			else if (g == 98)
				printf("%d\n",g);
		}
	}
	else if (b >= 98)
	{
		for (h = b; h >= 98; h--)
		{
			if (h != 98)
				printf("%d, ", h);
			else if (h == 98)
				printf("%d\n", h);
		}
	}
}
