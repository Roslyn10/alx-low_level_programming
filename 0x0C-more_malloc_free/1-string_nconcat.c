#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings
 * Description - Combines two strings
 * @s1: First given string
 * @s2: Second given string
 * @n: Number of bytes
 * Return: NULL if the function fails and
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int f = 0, h = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[f] != '\0')
	{
		f++;
	}
	while (s2[h] != '\0' && h < n)
	{
		h++;
	}

	r = (char *)malloc(f + h + 1);
	if (r == NULL)
	{
		return (NULL);
	}

	strcpy(r, s1);
	strncat(r, s2, h);

	return (r);
}
