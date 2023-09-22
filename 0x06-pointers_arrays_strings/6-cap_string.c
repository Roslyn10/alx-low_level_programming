#include "main.h"
#include <stdio.h>
/**
 * *cap_string - Capitalizes all words in a string
 * Description - Capitalizes all the words of a given string
 * @cap: Given string
 * Return: cap
 */
char *cap_string(char *cap)
{
	int e = 0;

	while (cap[e])
	{
		if (cap[e] >= 'a' && cap[e] <= 'z')
		{
			if (e == 0 ||
				cap[e - 1] == ' ' ||
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
				cap[e - 1] == '}' ||
				cap[e - 1] == 0)

			{
				cap[e] -= 32;
			}
		}
		e++;
	}

	return (cap);
}
