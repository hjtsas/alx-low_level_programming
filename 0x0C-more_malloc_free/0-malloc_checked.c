#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory
 * Return: p or 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	P = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
