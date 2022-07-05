#include "main.h"
/**
 * main - display _putchar ,followed by new line
 *
 * Return: AlWAYS 0
 */
int main(void)
{
	char get[] = "_putchar";
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(get[a]);
	}
	_putchar('\n');
	return (0);
}
