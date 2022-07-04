#include<stdio.h>
#include<stdlib.h>
/**
 * main - combination of three number
 * Return: 0
 */
int main(void)
{

	int g;
	int h;
	int b = 0;

	while(b < 10)
	{
		h= 0;
		while (h < 10)
		{
			g = 0;
			while (g < 10)
			{
				if (g != h && h != b && b < h && h < g)
				{
				putchar('0' + b);
			putchar('0' + h);
		putchar('0' + g);
	if (g + h + b != 9 + 8 + 7)
	{
	putchar(',');
putchar(' ');
	}
				}
				g++;
			}
			h++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
