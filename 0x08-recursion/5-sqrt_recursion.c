#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

int _sqrt_recursion(int n);
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt_recursion - return square root
 * @n: intiger
 *
 *Return: result
 */

int _sqrt_recursion(int n)
{
	int sqrt = i * i;

	if (sqrt < 0)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
