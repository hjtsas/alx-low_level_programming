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
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
