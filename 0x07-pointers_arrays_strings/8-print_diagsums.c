#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - sum of diagonal
 * @a: string
 * @size: size of the matrix
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 = a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
