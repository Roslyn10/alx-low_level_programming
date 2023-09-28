#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * Description - Converts a binary number to an unsigned int
 * @b: A pointer to given string
 * Return: converted number or 0 if b = NULL or...
 * when thereis one or more chars in string b that isnt 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int d;
	int l; /**Used to calculate the length**/

	if (b == NULL)
	{
		return (0);
	}

	binary = 0;
	l = strlen(b);

	for (d = 0; d < l; d++)
	{
		if (b[d] == '0') /**Checks if it is 0**/
		{
			binary <<= 1; /**Makes space for binary int**/
		}
		else if (b[d] == '1') /**Checks if it is 1**/
		{
			binary <<=1;
			binary |= 1;
		}
		else
		{
			return (0);
		}
	}

	return (binary);
}
