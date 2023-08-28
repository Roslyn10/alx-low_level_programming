#include "main.h"
/**
 * char *_memcpy - Copies memory area
 * Description - Copies memory area
 * @dest: Pointer to the memory area
 * @src: Source pointer which will be copied
 * @n: The number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		*src = *dest;
		src++;
		dest++;
	}
	return (dest);
}
