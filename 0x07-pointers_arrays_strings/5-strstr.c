#include <stdio.h>
#include <string.h>

/**
 * _strstr - locate a substring
 * @needle: substring
 * @haystack: string
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}
