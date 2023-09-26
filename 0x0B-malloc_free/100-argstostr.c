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
	int t_l = 0;
	int a_i, c_i, s_i = 0;
	char *r;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a_i = 0; a_i < ac; a_i++)
	{
		for (c_i = 0; av[a_i][c_i]; c_i++)
		{
			t_l++;
		}
		t_l++;
	}

	r = (char *)malloc(t_l + 1);
	if (r == NULL)
	{
		return (NULL);
	}

	for (a_i = 0; a_i < ac; a_i++)
	{
		for (c_i = 0; av[a_i][c_i]; c_i++)
		{
			r[s_i++] = av[a_i][c_i];
		}
		r[s_i++] = '\n';
	}

	r[s_i] = '\0';
	return (r);
}
