#include <stdio.h>
#include <string.h>

/**
 * _strspn - get the length of a prefix
 * @s: initial segment
 * @accept: source
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] > '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
