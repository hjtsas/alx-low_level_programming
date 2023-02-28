#include "main.h"

/**
 * _atoi - Convert a string in to integer
 * @s: the pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int x = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			x = (x * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	x *=  min;
	return (x);
}
