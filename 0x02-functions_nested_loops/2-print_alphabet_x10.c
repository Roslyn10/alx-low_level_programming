#include "main.h"
/**
 * print_alphabet_x10 -Prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int P;

	for (P = 0; P < 10; P++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
