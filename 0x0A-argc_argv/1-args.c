#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of command line argume,ts
 * @argv: arrray name
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
