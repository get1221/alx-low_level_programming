#include<stdio.h>
/**
 * main - print lowercase and numbers
 *
 * Return: 0
 */
int main(void)
{
	char get;
	
	for (get = 0; get <= 9; get++)
		putchar(get);
	for (get = 'a'; get <= 'f'; get++)
		putchar(get);
	putchar('\n');
	return (0);
}
