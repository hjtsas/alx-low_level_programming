#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: number of return
 * Return: 0
 */

int factorial(int n)
{
	return (n * factorial(n - 1));

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
}
