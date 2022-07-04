#include<stdio.h>
/**
 * main - combination of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int g, h;

	for (g = 0; g <= 99; g++)
	{
		for (h = 1; h <= 99; h++)
		{
			if (h != g)
			{
				putchar(g / 10 + 48);
				putchar(g % 10 + 48);
				putchar(' ');
				putchar(h / 10 + 48);
				putchar(h % 10 + 48);
				if (g * 100 + h != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
