#include<stdio.h>
/**
 *
 * main - print numbers
 * Returns: 0
 */
int main(void)
{
	int num = 0;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
