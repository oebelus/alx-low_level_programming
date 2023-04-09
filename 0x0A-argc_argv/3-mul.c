#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of command line argume,ts
 * @argv: arrray name
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int a,b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a*b);
		return (0);
	}
	printf("Error\n");
	return (1);
}