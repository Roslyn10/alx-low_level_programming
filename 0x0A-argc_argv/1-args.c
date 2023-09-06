#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it
 * Description - Prints the number of arguments passed into it
 * @argv: Argument vector
 * @argc: Argument counter
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*Ignore */

	printf("%d\n", argc - 1);

	return (0);
}
