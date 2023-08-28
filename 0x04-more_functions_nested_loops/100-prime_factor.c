#include <stdio.h>
/**
 * main - Prints the largest prime factor ppf a number 612852475143
 * Description Finds and prints largest primes factor followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int f;
	long int r;

	while (f % 2 == 0)
	{
		f /= 2;
	}

	for (r = 3; r * r <= r; r += 2)
	{
		while (f % r == 0)
		{
			f /= r;
		}
	}
	return (f);
}
