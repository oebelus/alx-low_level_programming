#include <string.h>

/**
 * binary_to_uint - binary to decimal
 * @b: pointer to the character
 * Return: 0 if b is NULL, or b is not 0 nor 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;
	int two = 1;
	int len = strlen(b);

	if (!b)
	{
		return (0);
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += two;
		}
		two *= 2;
	}
	return (decimal);
}
