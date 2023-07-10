#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create a file and add content
 * @filename: name of the file
 * @text_content: content of the file
 * Return: -1 if failure, 1 if success
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	/* close file and return 1 on success */
	close(fd);
	return (1);
}

