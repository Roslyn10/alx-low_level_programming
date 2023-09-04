#include <stdio.h>
#include "main.h"

/**
 * main - Checks the code
 * Description - Prints fizz/ buzz for multiples of 3 and 5 respectively
 * Return: 0 Always (Success)
 */
int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0 && z % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (z % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", z);
		}
	}
		printf("\n");

		return (0);
}
