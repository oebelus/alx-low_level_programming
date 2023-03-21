#include <stdio.h>

/**
 * Description: main - print the alphabet.
 * Return: 0 if success
*/

int main()
{
	print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}