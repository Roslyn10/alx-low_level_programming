#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * Description - Changes all lowercse letters of a string to uppercase
 * @ptr: Points to the current character of string
 * @str: begins the string
 * Return: str
 */
 char *string_toupper(char *)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
