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
	int count = 0;

	if (argc >= 1)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
}

