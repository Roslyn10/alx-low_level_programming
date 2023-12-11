#include "main.h"

/**
 * char *_strpbrk - Searches a string for any of a set of bytes
 * Description - Searches a string for a set of bytes
 * @accept: A pointer to a given string
 * @s: A pointer to the main string
 * Return: s if there is a match and NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
