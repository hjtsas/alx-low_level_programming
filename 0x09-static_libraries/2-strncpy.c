#include "main.h"

/**
 * _strncpy - copies a string
 * @src: first string
 * @dest: second string
 * @n: maximum number of bytes
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, x = 0;

	while (src[index++])
		x++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = x; index < n; index++)
		x = '\0';
	return (dest);
}
