#include "main.h"

/**
 * read_textfile - reads a text and print POSIX
 * @filename: 0 or NULL
 * @letters: the number of letters it should read
 * Return: print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	ssize_t total_read = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((read = getline(&line, &len, fp))
			!= -1 && total_read + read <= letters)
	{
		printf("%s", line);
		total_read += read;
	}
	fclose(fp);
	if (line)
		free(line);
	return (total_read);
}
