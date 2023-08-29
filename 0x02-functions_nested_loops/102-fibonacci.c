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
	int fibo = 50;
	int c = 0;
	long int temp;

	printf("%ld, %ld, ", f, i);

	while (c < fibo - 2)
	{
		temp = f;
		f = i;
		i += temp;

		printf(", %ld", i);

		c++;
	}

	printf("\n");

	return (0);
}
