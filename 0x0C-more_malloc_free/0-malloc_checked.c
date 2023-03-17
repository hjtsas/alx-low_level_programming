#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory
 * Return: (p) or 98 if check fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
