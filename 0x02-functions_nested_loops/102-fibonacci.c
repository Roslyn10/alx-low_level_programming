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
	long int fib50 = 20365011074;

	printf("%d, %ld, ", f, i);

	while (i <= fibo50)
	{
		printf("%ld", i);

		if (i + f <= fibo50)
		{
			printf(", ");
		}


		temp = f;
		f = i;
		i += temp;
	}

	printf("\n");

	return (0);
}
