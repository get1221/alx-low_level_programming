#include<stdio.h>
/**
 * main - print lowercase and numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char get;

	for (num = 0; num < 10; num++)
		for (get = 'a'; get <= 'f'; get++)
			putchar(get);
	putchar(num);
	putchar('\n');
	return (0);
}
