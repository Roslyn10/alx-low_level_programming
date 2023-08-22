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

	length = strlen;

	for (r = 0; v = length - 1; r < v; r++, v--)
	{
		e = s[r];
		s[r] = s[v];
		s[v] = e;
	}
}
