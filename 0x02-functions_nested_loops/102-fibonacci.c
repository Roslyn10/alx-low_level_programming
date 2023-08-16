#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 * Description - Starting with 1 and 2, prints Fibonacci numbers
 */
int main(void)
{
	long int  f = 1;
	long int  i;
	int temp;

	for (i = 1;i <= 20365011074; i++)
	{
		printf("%ld + %ld", f, i);
		printf(", ");

		temp = f;
		f = i;
		i += temp;
	}


	return (0);
}
