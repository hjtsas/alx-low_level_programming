#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory
 *
 * Return: pointer
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
