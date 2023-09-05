#include "main.h"
#include <stddef.h>
/**
 * char *_strstr - Locates a substring
 * Description - Locates a substring
 * @haystack: Provided string that has the substring needle in it
 * @needle: Substring thats being looked for in haystack
 * Return: &haystcak if found and NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0;


	while (haystack[n] != '\0')
	{
		int h = 0;

		while (needle[h] != '\0' && needle[h] == haystack[n + h])
		{
			h++;
		}

		if (needle[h] == '\0')
		{
			return (&haystack[n]);
		}

		n++;
	}
	return (NULL);
}
