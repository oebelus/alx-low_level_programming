#include <stdio.h>

/**
 * Description: main - print the alphabet.
 * Return: 0 if success
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
