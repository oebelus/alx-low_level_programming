#include <stdio.h>

/**
 * Description: print_alphabet_x10 - print the alphabet.
*/

void print_alphabet_x10(void)
{
	int c;

	int i = '0';

	while (i < '9')
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		i++;
	}
	putchar('\n');
}
