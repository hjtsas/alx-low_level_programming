#include <stdio.h>

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return square root
 * @n: intiger
 *
 *Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
