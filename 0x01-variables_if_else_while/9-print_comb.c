#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
/**
 * main - Prints all possible combinations of singel-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

