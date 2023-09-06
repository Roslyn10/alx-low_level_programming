#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * Description - Adds positive numbers, if no number print 0
 * @argv: Argument vector
 * @argc: Argument counter
 * Return: 1 if the digits are symbols or 0 if Success
 */
int main(int argc, char *argv[])
{
	int o;
	int t;
	int total;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (o = 1; o < argc; o++)
	{
		for (t = 0; argv[o][t] != '\0'; t++)
		{
			if (!isdigit(argv[o][t]))
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[o]);
	}

	printf("%d\n", total);

	return (0);
}
