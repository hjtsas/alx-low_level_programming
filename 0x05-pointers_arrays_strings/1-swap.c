#include <stdio.h>

/**
 * swap_int - swaps the values of two int
 *@a: int
 *@b: int
 *
 * return (0)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
