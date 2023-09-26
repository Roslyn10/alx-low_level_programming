#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * **strtow - Splits a string into words
 * Description - Splits a string into words
 * Return: NULL if str == NULL of str == "" or if the function fails
 */
char **strtow(char *str)
{
	int w_c = 0;
	char *t;
	char **w;
	int k, l;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	t = strtok(str, " ");
	while (t != NULL)
	{
		w_c++;
		t = strtok(NULL, " ");
	}

	w = (char **)malloc((w_c + 1) * sizeof(char *));
	if (w == NULL)
	{
		return (NULL);
	}

	t = strtok(str, " ");
	k = 0;

	while (t != NULL)
	{
		w[k] = (char *)malloc((strlen(t) + 1) * sizeof(char));
		if (w[k] == NULL)
		{
			for (l = 0; l < k; l++)
			{
				free(w[l]);
			}
			free(w);
			return (NULL);
		}
		strcpy(w[k], t);
		k++;
		t = strtok(NULL, " ");
	}

	w[w_c] = NULL;

	return (w);
}
