#include <stdio.h>
/**
 * main - Prints the sum od the even terms of the fib seq
 * Description - The values should not exceed 4,000,000
 * Return: 0 Always (Success)
 */
int main(void)
{
	int w = 1;
	int y = 2;
	int k;
	int even_num = 2;

	while (1)
	{
		k = w + y;

		if (k > 400000)
			brek;

		if (k % 2 == 0)
		{
			even_num += k;
		}

		w = y;
		y = k;
	}

	printf("%d\n", even_num);

	return (0);
}
