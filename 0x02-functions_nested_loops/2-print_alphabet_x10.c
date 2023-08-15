#include "main.h"
/**
 * print_alphabet_x10 -Prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letterx10;

	for (letterx10 = 0; letterx10 < 10; letterx10++)
	{
		for (letterx10 = 'a'; letterx10 <= 'z';)
		{
			_putchar(letterx10);
		}
	}
	_putchar('\n');
}
