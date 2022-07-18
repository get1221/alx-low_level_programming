#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: matrix
 */
void print_chessboard(char (*a)[8])
{
	int g, h;

	for (g = 0; g < 8; g++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(*(*(g + a) + h));
		}
		_putchar('\n');
	}
}
