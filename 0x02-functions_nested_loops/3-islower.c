#include "main.h"
/**
 * _islower - Checks for lower case
 * c - Returns 1
 * Description - Returns 0 for every other letter
 * Return: 1 for lowercase c and 0 for every other letter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


