#include <stdio.h>

/**
 * Description: main - print the alphabet.
 * Return: 0 if success
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
