#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments it recieves, including the first one
 * Description - While each argument gets printed per line
 * @argv: Argument vector
 * @argc: Argument counter
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}

	return (0);
}
