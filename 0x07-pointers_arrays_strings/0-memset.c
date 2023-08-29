#include "main.h"
/**
 * char *_memset - Fills memory with a constant byte
 * Description - Fills the memory with a cinstant byte
 * @n: Number of bytes
 * @s: Pointer to the memory area
 * @b: Constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g = 0;
	char *o = s;

	for (g = 0; g < n; g++)
	{
		*s = b;
		s++;
	}
	return (o);
}
