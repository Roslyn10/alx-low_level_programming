#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10, in main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');

		if (num < 9)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
