#include "main.h"
/**
 * *_strcpy - Copies the string pointed by src
 * Description -Followed by null byte(\0)
 * @src: Origninal string
 * @dest: Destination after copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (d);
}
