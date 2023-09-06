#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * Description - Multipies two numbers
 * @argv: Argument vector
 * @argc: Argument counter
 * Return: 0 if success and 1 if less than two argument are received
 */
int main(int argc, char *argv[])
{
	int o;
	int t;
	int total;

	if (argc != 3 && argc < 2)
	{
		printf("Error\n");

		return (1);
	}

	o = atoi(argv[1]);
	t = atoi(argv[2]);

	total = o * t;

	printf("%d\n", total);

	return (0);
}
