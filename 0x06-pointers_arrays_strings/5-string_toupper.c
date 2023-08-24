#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * Description - Changes all lowercse letters of a string to uppercase
 * @str: parameter
 * Return: str
 */
char *string_toupper(char *str)
{

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (str);
}
