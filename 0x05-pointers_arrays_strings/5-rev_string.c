#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverses a string
 * Description - A function that reverses a string
 * @s: Given string
 */
void rev_string(char *s)
{
	int length;
	int r, v;
	char e;

	while (s[length] != '\0')
	{
		length++;
	}

	r = 0;
	v = length -1;

	for (r < v; r++, v--)
	{
		e = s[r];
		s[r] = s[v];
		s[v] = e;
	}
}
