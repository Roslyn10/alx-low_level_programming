#include "main.h"
#include <string.h>
/**
 * _strspn - Gets the lenght of a substring
 * Description - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @d: Used to keep track of s
 * @accept: Pointer to the string containing the character
 * Return: d
 */
unsigned int _strspn(char *s, char *accept)
{
	d = 0;

	while (*s != '\0')
	{
		if (strchr(accept, *s) == NULL)
		{
			break;
		}

		d++;
		s++;
	}
	return (d);
}
