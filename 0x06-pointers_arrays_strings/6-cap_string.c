#include "main.h"
#include <stdio.h>
/**
 * *cap_string - Capitalizes all words in a string
 * Description - Capitalizes all the words of a given string
 * @cap: Given string
 * @e: Number of integers in the array
 * Return: cap
 */
char *cap_string(char *cap)
{
	int e = 0;

	while (cap[e])
	{
		while (!(cap[e] >= 'A' && cap[e] <= 'Z'))
			e++;

		if (cap[e - 1] == ' ' ||
				cap[e - 1] == '\t' ||
				cap[e - 1] == '\n' ||
				cap[e - 1] == ',' ||
				cap[e - 1] == ';' ||
				cap[e - 1] == '.' ||
				cap[e - 1] == '!' ||
				cap[e - 1] == '?' ||
				cap[e - 1] == '"' ||
				cap[e - 1] == '(' ||
				cap[e - 1] == ')' ||
				cap[e - 1] == '{' ||
				cap[e -1 ] == '}' ||
				cap[e - 1] == 0)
			{
				cap[e] -= 32;
			}
				e++;
	}
	return (cap);
}
				
