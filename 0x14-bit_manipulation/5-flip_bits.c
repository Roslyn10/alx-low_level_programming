#include <stdio.h>
#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need to...
 * .. flip to get from one number to another
 * Description: Returns the number of bits needed to flip to get fom one number
 * to another
 * @n: Input of first given number
 * @m: Inout of second given number
 * Return: The bits that were flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**Calculates the XOR of n and m**/
	unsigned long int r = n ^ m;
	unsigned int btf = 0;

	/**Counts the set bits**/
	while (r)
	{
		btf += r & 1;
		r >>= 1;
	}

	return (btf);
}
