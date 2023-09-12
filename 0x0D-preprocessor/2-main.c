#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled form
 * Description - Prints the name of the file it was compiled followed by \n
 * Return: 0 Always (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
