#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * check_num - chech strings
 * @str: array
 * Return: Always 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: cpunt arguments
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;
	int j;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			j = atoi(argv[count]);
				sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
