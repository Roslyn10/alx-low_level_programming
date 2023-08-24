#include "main.h"
/**
 * *rot13 - Encodes a string using rot13
 * Description - Encodes a string rot13
 * Return: r char
 */
char *rot13(char *r)
{
	char Nalpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotalpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int o;
	int t;

	for (o = 0; r[o] != '\0'; r++)
	{
		for (t = 0; t < 52; t++)
		{
			if (r[o] == Nalpha[t])
			{
				r[o] = rotalpha[t];
				break;
			}
		}
	}
	return (r);
}
