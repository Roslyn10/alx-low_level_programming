#include "main.h"
/**
 * *_strncpy - Copies a string
 * Description - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
