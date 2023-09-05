#include <stdio.h>
#include "main.h"
/**
 * *str_concat - Concatenates two strings
 * Description - Combines two strings
 * @st1: First given string
 * @str2: Second given string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	int f = 0;
	int h = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[f] != '\0')
	{
		f++;
	}
	while (s2[h] != '\0')
	{
		h++;
	}
	r = malloc(sizeof(char) * (f + h + 1));

	if (r == NULL)
	{
		return (NULL);
	}

	while (s1[f] != '\0')
	{
		r[f] = s1[f];
		f++;
	}
	while (s2[h] != '\0')
	{
		r[f] = s2[h];
		f++;
		h++;
	}
	r[f] = '\0';
	return (r);
}
