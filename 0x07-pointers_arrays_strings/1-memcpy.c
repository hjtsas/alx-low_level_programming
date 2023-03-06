#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * @n: bytes to be copied
 * @src: memory area to be copied from
 * @dest: destnation memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
