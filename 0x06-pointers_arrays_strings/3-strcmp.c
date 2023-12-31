#include "main.h"
/**
 * _strcmp - Compare two strings
 * Description - Compares two strings
 * @s1: String 1
 * @s2: Sring 2
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
