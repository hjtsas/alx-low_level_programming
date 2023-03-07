#include <stdio.h>
#include <string.h>

/**
 * _strchr - locate a character in string
 * @c: character
 * @s: string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] < '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
