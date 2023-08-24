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
	int f;
	int k;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}

	k = 0;
	while (src[k] != '\0')
	{
		dest[f] = src[k];
		f++;
		k++;
	}
	dest[f] = '\0';
	return(dest);
}
