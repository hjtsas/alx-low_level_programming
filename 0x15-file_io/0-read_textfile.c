#include "main.h"

/**
 * read_textfile - reads a text and print POSIX
 * @filename: 0 or NULL
 * @letters: the number of letters it should read
 * Return: print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, buf, n_read);
	free(buf);
	close(fd);
	return (n_read);
}
