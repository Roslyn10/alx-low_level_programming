#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * Description - Calculate the length of a given string
 * @s: String
 * Return: int length
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
