#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled form
 * Description - Prints the name of the file it was compiled followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	_putchar('%s\n', __FILE__);
	return (0);
}
