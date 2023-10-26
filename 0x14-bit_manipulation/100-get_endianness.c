#include "main.h"

/**
 * get_endianness - A function that checks the ednianness
 * Description - Checks the endianness
 * Return: 0 if big and 1 if little
 */

int get_endianness(void)
{
	int e;
	char *n = (char *)&e;

	if (*n == 1)
	{
		return (1);/**Little endian**/
	}
	else if (*(n + sizeof(unsigned int) - 1) == 1)
	{
		return (0); /**Big endian**/
	}
	return (-1);
}
