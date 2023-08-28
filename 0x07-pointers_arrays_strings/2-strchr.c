#include "main.h"
/**
 * _strchr - Locates a character in a string
 * Description: Locates a character in a string
 * @s: Points to the string that should be located
 * @c: The character that should be located
 * Returns: NULL if the character isnt found, or s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
