#include "main.h"
/**
 * *_strcat - Concatenates two strings
 * Description - Combines two strings
 * @src: String 1
 * @dest: String 2 
 * Return: dest sting
 */
char *_strcat(char *dest, char *src)
{

	while(*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
