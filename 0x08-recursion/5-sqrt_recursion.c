#include "main.h"
#include <stdio.h>

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
