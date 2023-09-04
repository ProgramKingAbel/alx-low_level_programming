#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads txt and > stdout
 * @filename: nof
 * @letters: *xters read
 * Return: filename ?? null : 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t t;
	ssize_t w;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
