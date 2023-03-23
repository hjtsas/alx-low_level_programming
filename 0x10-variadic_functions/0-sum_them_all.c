#include "variadic_function.h"

/**
 * sum_them_all - sum all the parameters
 * @n: the number of parameters
 * @....: variable number of parameters
 * Return: 0 || sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);
	for (i = 0; i < n; i++)
		sum += va_arg(x, int);
	va_end(x);
	return (sum);
}
