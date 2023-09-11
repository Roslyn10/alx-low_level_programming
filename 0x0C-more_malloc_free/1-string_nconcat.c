#include <stdio.h>
#include"main.h"
#include <string.h>
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
	unsigned int s1l;
	unsigned int s2l;
	unsigned int t;
	char *r;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	s1l = strlen(s1);
	s2l = strlen(s2);

	if (n >= s2l)
	{
		n = s2l;
	}

	t = s1l + n;
	r = (char *)malloc(t + 1);

	if (r == NULL)
	{
		return (NULL);
	}

	strcpy(r, s1);
	strncat(r, s2, n);

	return (r);
}
