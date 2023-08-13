#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
/**
 * main - Prints all number of bas 16 in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char letter;

		for (num = '0'; num <= '9'; num++)
		{
			putchar(num + '0');
		}
	for (letter = 'a'; letter <= 'e'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
