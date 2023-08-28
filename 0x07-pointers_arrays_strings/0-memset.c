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
	unsigned int o;

	for (o = 0; n < o; n++)
	{
		*s = b;
		s++;
	}
	return (s);
}
