#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - create a file and add content
 * @filename: name of the file
 * @text_content: content of the file
 * Return: -1 if failure, 1 if success
 */

int create_file(const char *filename, const char *text_content)
{
	if (filename)
	{
		FILE *file = fopen(filename, "w");
		if (file)
		{
			fprintf(file, "%s", text_content);
			fclose(file);
			return (1);
		}
	}
	return (-1);
}
