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
	unsigned int binary = 0;
	int d;

	if (b == NULL)
	{
		return (0);
	}

	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] == '0')
		{
			binary <<= 1;
		}
		else if (b[d] == '1')
		{
			binary <<= 1;
			binary |= 1;
		}
		else
		{
			return (0);
		}
	}

	return (binary);
}
