#include "main.h"

/**
 * flip_bits - returns the num of bit needed to flip
 * @n: first num
 * @m: second num
 * Return: num of bit needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		x &= (x - 1);
		count++;
	}
	return (count);
}
