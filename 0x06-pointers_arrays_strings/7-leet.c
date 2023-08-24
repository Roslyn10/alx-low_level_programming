#include "main.h"
/**
 * *leet - Encodes a string into 1337
 * Description - Encodes a string into 1337 (leet)
 * @g: Pointer
 * Return: g
 */
char *leet(char *g)
{
	int h;
	int r;
	char str1[] = {"aA", "eE", "oO", "tT", "lL"};
	char str2[] = {"4", "3", "0", "7", "1"};

	for (h = 0; g[h] != '\0'; h++)
	{
		for (r = 0; r < 10; r++)
		{
			if (g(h) == str1[r])
			{
				g[h] = str2[r];
			}
		}
	}
	return (g);

