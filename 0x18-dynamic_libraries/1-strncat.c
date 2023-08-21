#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: first string
 * @dest: second string
 * @n: number of byte
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, x = 0;

	while (dest[index++])
		x++;
	for (index = 0; src[index] && index < n; index++)
		dest[x++] = src[index];
	return (dest);
}
