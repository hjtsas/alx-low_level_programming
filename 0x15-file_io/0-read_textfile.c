#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text and print POSIX
 * @filename: 0 or NULL
 * @letters: the number of letters it should read
 * Return: print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[letters];
	size_t nread;

	file = fopen(filename, "r");
	if (file == NULL || filename == NULL)
		return (0);
	nread = fread(buffer, 1, letters, file);
	if (nread > 0)
		fwrite(buffer, 1, nread, stdout);
	fclose(file);
	return (nread);
}
