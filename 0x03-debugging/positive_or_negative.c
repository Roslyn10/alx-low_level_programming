#include "main.h"
/**
 * positive_or_negative - Checks whether the given integer is + or -
 * Description - Checks whether any given number is +, - or 0
 * @i: Given integer
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
