#include<stdio.h>
#include<stdlib.h>
/**
 * main - combination of numbers
 * Return: 0
 */
int main(void)
{
	int g;
	int h = 0;
	while (h < 10)
	{
		g = 0;
		while (g < 10)
		{
			if (h != g && h < g)
			{
				putchar('0' + h);
				putchar('0' + g);
				if (g + h != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			g++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
