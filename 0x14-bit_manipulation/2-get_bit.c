#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be given
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	val = ((n >> index) & 1);
	return (val);
}
