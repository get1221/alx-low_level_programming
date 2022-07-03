#include<stdio.h>
/**
 * main - print lowercase and numbers
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char get;

	for (num = 0; num < 10; num++)
		for (get = 'a'; get <= 'f'; get++)
			putchar(num);
	putchar(get);
	putchar('\n');
	return (0);
}
