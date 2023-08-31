#include "main.h"
/**
 * wildcmp - Compares two strings
 * Description - Compares two strings and returns
 * @s1: First given string
 * @s2: Second given string
 * Return: 1 if its identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '\0')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2+ 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
