#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memmory with constant byte
 * @n: the first byte
 * @s: pointer
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
