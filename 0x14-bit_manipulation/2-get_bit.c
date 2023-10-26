#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * Description - Returns the value of a bit at a given index
 * @n: Inout number from which the bit is being extracted
 * @index: Represents the zero-based index
 * Return: the value of index, or -1 if an error occures
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;
	int b_v;

	/**Checks for invalid index**/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/**Isolated the bit at given index**/
	bit = 1UL << index;
	/**1UL is used to specify the type and size of the constant 1**/

	/**Applies the bitmask and checks the isolate bit**/
	b_v = (n & bit) ? 1 : 0;

	return (b_v);
}
