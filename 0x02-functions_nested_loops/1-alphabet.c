#include <stdio.h>

/**
 * Description: main - print the alphabet.
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

int main(void)
{
	print_alphabet();
	return (0);
}
