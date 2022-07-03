#include<stdio.h>
/**
 * main - print numbers by comma and space
 * Description: Print Numbers separated by ,, followed by a space in  ascending order
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
