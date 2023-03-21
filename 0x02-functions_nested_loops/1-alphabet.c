#include <stdio.h>

/**
 * Description: print_alphabet - print the alphabet.
 * Return: 0 if success
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
