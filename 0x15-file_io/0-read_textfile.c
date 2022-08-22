#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: const char type
 * @letters: size_t type
 * Return: the actual number of letters itcould read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wr, rd;
	char *buff = (char *)malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rd = read(fd, buff, letters);
	if (rd < -1)
		return (0);

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr < 0 || wr != rd)
		return (0);

	free(buff);
	close(fd);
	return (wr);
}
