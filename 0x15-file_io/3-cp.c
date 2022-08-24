#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *get_buffer(char *file);
void close_file(int file);

/**
 * close_file - closeing the giving file
 * @file: the giving file.
 * Return: 1 on Success -1 on failure
 */
void close_file(int file)
{
		int num;

		num = close(file);
		if (num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			exit(100);
		}
}
/**
 * get_buffer - get the buffer of the file
 * @file: the file
 * Return: the buffer
 */

char *get_buffer(char *file)
{
	char *p;

	p = malloc(sizeof(char) * 1024);
	if (p == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (p);
}

/**
 * main - The main fucntion of the program
 * @argc: The length of the array
 * @argv: The Array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from, to, wr, rd;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = get_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
