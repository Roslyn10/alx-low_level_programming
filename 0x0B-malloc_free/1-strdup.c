#include "main.h"
#include <stdio.h>
/**
 * *_strdup - Returns a pointer to a newly allocated space
 * Description - returns a pointer to a newly allocated space in memory..
 * which contains a copy of the string given as a parameter
 * @str: Character parameter
 * Return: NULL if str = NULL, or if insufficient memory and a pointer
 */
char *_strdup(char *str)
{
	char *d;
	int g = 0;
	int p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[g] != '\0')
	{
		g++;
	}

	d = malloc(sizeof(char) * (g + 1));

	if (d == NULL)
	{
		return (NULL);
	}

	for (p = 0; str[p]; p++)
	{
		d[p] = str[p];
	}

	return (d);
}
