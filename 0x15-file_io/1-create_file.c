#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - binary to decimal
 * @b: pointer to the character
 * Return: 0 if b is NULL, or b is not 0 nor 1
 */

int create_file(const char *filename, const char *text_content)
{
	if (filename)
	{
		FILE *file = fopen(filename, "w");
		if (file)
		{
			fprintf(file, "%s", text_content);
			return (1);
		}
	}
	return (0);
}
