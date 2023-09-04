#include "main.h"
/**
 * *_strncat - Concatenates two strings
 * Description - Combines two strings
 * @dest: String 1
 * @src: String 2
 * @n: Parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}

	*d = '\0';

	return (dest);
}
