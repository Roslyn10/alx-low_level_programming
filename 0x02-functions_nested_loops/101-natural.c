#include <stdio.h>
/**
 * main - Calcuates the sum of the multiples of 3 and 5
 * Description - Calculates the sum of multiples of 3 and 5 below 1024
 * Return: 0 Always (Succes)
 */
int main(void)
{
	int l = 1024;
	int s = 0;
	int y;

	for (y = 3; y < l; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
		{
			s += y;
		}
	}

	printf("%d\n", s);

	return (0);
}
