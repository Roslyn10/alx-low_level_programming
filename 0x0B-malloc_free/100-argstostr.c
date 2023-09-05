#include "main.h"
#include <stdio.h>
/**
 * *argstostr - Concatenates all the arguments of program
 * Description - Combines all the arguments of the program
 * @ac: How many arguments being combined
 * @av: Actual strings
 * Return: NULL if ac == 0 or av == NULL..
 * ...returns a pointer to a new strinf, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int t_l, d, g = 0, p = 0;
	char *r;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (t_l = 0; t_l < ac; t_l++)
	{
		for (d = 0; av[t_l][d]; d++)
			g++;
	}
	p += ac;

	r = malloc(sizeof(char) * p + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (t_l = 0; t_l < ac; t_l++)
	{
		for (d = 0; av[t_l][d]; d++)
		{
			r[g] = av[t_l][d];
			g++;
		}
		if (r[g] == '\0')
		{
			r[g++] = '\n';
		}
	}
	return (r);
}
