#include "main.h"
/**
 * _isalpha - Checks for alphabet
 * @c: Returns 1
 * Desciption - Returns 0 for all the alphabet
 * Return: 1 for "C/c" and 0 for every every other letter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
