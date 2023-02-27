#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: string
 * return: void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = i; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
