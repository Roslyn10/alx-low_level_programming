#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10, in main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';
	char newline = '\n';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
		
	}

	putchar(newline);

	return (0);
}
