#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @src: first string
 * @dest: second string
 * Return: pointer to the result string dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, i;

	while (dest[x])
	{
		x++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[x] = src[i];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
