#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the minimum number
 * @argc: number of argument
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	result = 0;
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= cents[i])
		{
			result++;
			i -= cents[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
