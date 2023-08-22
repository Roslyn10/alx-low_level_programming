#include "main.h"
/**
 * int _strlen - Calculates the length of a string
 * Description - Calculate the length of a given string
 * Return: 0 Always (Success)
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
