#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *str_concat - Concatenates two strings
 * Description - Combines two strings
 * @s1: First given string
 * @s2: Second given string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int f, h;
	char *r;
	int t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	f = strlen(s1);
	h = strlen(s2);
	t = f + h + 1;

	r = (char *)malloc(t);

	if (r == NULL)
	{
		return (NULL);
	}

	strcpy(r, s1);
	strcat(r, s2);
	return (r);
}
