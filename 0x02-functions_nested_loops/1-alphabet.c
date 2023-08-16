#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 * Description - Prints the alphabet using _putchar, in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	

}
