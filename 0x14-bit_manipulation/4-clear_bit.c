#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @index: is the index to be set
 * @n: pointer to the number to be changed
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
