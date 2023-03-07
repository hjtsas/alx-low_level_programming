#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints the chessbored
 * @a: size of the bored
 * Retur: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= a; i++)
	{
		for (j = 0; j <= a; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	return (0);
}
