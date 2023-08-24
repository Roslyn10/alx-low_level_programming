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
	int p;

	for (p = 0; p < n - 1 && src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}
