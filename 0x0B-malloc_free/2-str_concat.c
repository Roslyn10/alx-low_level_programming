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
	int f, h;
	int w, e;

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
	while (s2[h]!='\0')
	{
		h++;
	}

	r = (char *)malloc(f + h + 1);
	if (r == NULL)
	{
		return (NULL);
	}

	w = 0;
	while (s1[w] != '\0')
	{
		r[w] = s1[w];
		w++;
	}

	e = 0;
	while (s2[e] != '\0')
	{
		r[w + e] = s2[e];
		e++;
	}
	r[w + e] = '\0';

	return (r);
}
