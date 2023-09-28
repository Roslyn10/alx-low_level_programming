#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * Description - Sets the value of a bit to 1 at a given index
 * @n: Pointer to unsigned long int, memory location
 * @index: Unsigned int that represent the position of the bit
 * Return: 1 if it works and -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/**creates a bitmask wit a 1 at specified index**/
	bit = 1UL << index;

	*n |= bit;

	return (1);
}
