#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @index: the index
 * @n: pointer to the number to be changed
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
