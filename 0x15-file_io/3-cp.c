#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file
 * @argc: argument counter
 * @argv: argument vecter
 * Return: content
 */

int main(int argc, char *argv[])
{
	FILE *source_file, *target_file;
	char buffer[BUFFER_SIZE];
	int read_count;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file = fopen(argv[1], "r");
	if (source_file == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	target_file = fopen(argv[2], "w");
	if (target_file == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_count = fread(buffer, 1, BUFFER_SIZE, source_file)) > 0)
	{
		if (fwrite(buffer, 1, read_count, target_file) != read_count)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fclose(source_file) != 0 || fclose(target_file) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n",
				fclose(source_file) == 0 ? target_file : source_file);
		exit(100);
	}
	return (0);
}
