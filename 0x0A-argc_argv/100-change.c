#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimun number of coins to make change
 * Description - Prints the minimum number of coins to make change
 * @argv: Argument vector
 * @argc: Argument counter
 * Return: 1 if theres an error and 0 if there isnt
 */
int main(int argc, char *argv[])
{
	long cents;
	int coins25;
	int coins10;
	int coins5;
	int coins1;
	int total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atol(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins25 = cents / 25;
	cents %= 25;
	coins10 = cents / 10;
	cents %= 10;
	coins5 = cents / 5;
	cents %= 5;
	coins1 = cents;

	total = coins25 + coins10 + coins5 + coins1;

	printf("%d\n", total);

	return (0);
}

