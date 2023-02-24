#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: the number of times the charachter \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	int i, j;

	else (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (i == j)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
