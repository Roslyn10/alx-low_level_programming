#include <stdio.h>
#include "main.h"

/**
 * main - Checks the code
 * Description - Prints fizz/ buzz for multiples of 3 and 5 respectively
 * Return: 0 Always (Success)
 */
int main(void)
{
	int z = 1;

	while (z <= 100)
	{	

	if (z % 15 == 0)
	{
		printf("FIzzBuzz");
	}
	else if (z % 3 == 0)
	{
		printf("Fizzz");
	}
	else if (z % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", z);
	}
		z++;
	}


	return (0);
}
