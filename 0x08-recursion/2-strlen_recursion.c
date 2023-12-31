#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * Description - Returns the value of a string
 * @s: Character pointer
 * Return: Length
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
