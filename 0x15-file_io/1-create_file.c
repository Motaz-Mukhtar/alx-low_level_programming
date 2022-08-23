#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - creat a file
 * @filename: const char type
 * @text_content: char pointer type
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
