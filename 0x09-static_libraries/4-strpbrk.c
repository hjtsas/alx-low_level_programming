#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - search a string
 * @s: string
 * @accept: string
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
