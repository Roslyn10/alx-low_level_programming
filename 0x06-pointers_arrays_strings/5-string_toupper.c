#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * Description - Changes all lowercse letters of a string to uppercase
 * @v: Given string
 * Return: str
 */
char *string_toupper(char *v)
{
	int w;

	w = 0;

	while (v[w] != '\0')
	{
		if (v[w] >= 'a' && v[w] <= 'z')
		{
			v[w] = v[w] - 'a' + 'A';
		}
		w++;
	}
	return (v);
}
