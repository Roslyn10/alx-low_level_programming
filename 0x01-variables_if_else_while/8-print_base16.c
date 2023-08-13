#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
/**
 * main - Prints all number of base 16 in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digits[] = "0123456789abcdef";
	int n;

	for (n = 0; n < 16; n++)
	{
		putchar(hex_digits[n]);
	}

	putchar('\n');

	return (0);
}
