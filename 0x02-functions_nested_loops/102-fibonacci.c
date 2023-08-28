#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 * Description - Starting with 1 and 2, prints Fibonacci numbers
 */
int main(void)
{
	long int f = 1;
	long int i = 2;
	long int limit = 20365011074;
	int temp;

	printf("%ld, %ld, ", f, i);

	while (i <= limit)
	{
		temp = f;
		f = i;
		i += temp;

		if (i <= limit)
		{
			printf("%ld", i);

			if (i + f <= limit)
			{
				printf(",");
			}
		}
	}
	printf("\n");

	return (0);
}
