#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to be printed
 * @n: number of integers
 * @....: variable numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *str;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(x, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
