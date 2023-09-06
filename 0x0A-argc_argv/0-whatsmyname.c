#include <stdio.h>
#include "main.h"

/**
 * main - Prints its name, followed by a new line
 * Description - Prints its name, followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 Always (Suucess)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
