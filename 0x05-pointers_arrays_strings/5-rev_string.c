#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverses a string
 * Description - A function that reverses a string
 * @s: Given string
 */
void rev_string(char *s)
{
	int length = 0;
	int r = 0;
	int v = length -1;
	char e;

	while (s[length] != '\0')
	{
		length++;
	}

	while (r < v) 
	{
		e = s[r];
		s[r] = s[v];
		s[v] = e;
		r++;
		v--;
	}
}
