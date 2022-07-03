#include<stdio.h>
/**
 * main - main block code
 * Descriptions: print alphabet except e and q
 * Return: 0 (suucess)
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'e' && let != 'q')
			putchar(let);
	}
	putchar('\n');

	return (0);
}
