#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * Description - Sets the value of a bit to 0 at a given index
 * @n: Pointer to unsigned long int, memort location
 * @index: Represents the position of the bit
 * Return: 1 if it works, -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index <= 0)
	{
		return (*n);
	}

	mask = 1 << index;
	return (*n & ~mask);
}
