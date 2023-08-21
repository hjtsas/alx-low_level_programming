#include <stdio.h>
#include <string.h>

/**
 * _strlen - return the lenght of a string
 * @s: int
 *
 * Return: the length of (*s)
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
