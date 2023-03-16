#include <stdio.h>
#include <unistd.h>

/**
 * Description: main - This is a function that prints a string.
 * Return: 0 if success.
 */

int main(void)
{
	write(1, 
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (0);
}