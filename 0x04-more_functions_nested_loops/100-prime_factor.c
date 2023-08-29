#include <stdio.h>
/**
 * main - Prints the largest prime factor ppf a number 612852475143
 * Description Finds and prints largest primes factor followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int num = 612852475143L;
	long int f = num;
	long r;

	while (f % 2 == 0)
	{
		f /= 2;
	}

	for (r = 3; r * r <= f; r += 2)
	{
		while (f % r == 0)
		{
			f /= r;
		}
	}

	if (f > 1)
	{
		printf("%ld\n", f);
	}

	return (0);
}
