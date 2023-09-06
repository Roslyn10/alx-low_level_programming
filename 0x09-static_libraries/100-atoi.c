#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * Description - Converts a string to a given integer
 * @s: Given integer
 * Return: 0 if no numbers in string or return the integer
 */
int _atoi(char *s)
{
	int g = 1;
	int d = 0;
	unsigned int r = 0;

	while (s[d] != '\0' && (s[d] < '0' || s[d] > '9'))
	{
		if (s[d] == '-')
		{
			g *= -1;
		}
		d++;
	}

	while (s[d] >= '0' && s[d] <= '9')
	{
		r = (r * 10) + (s[d] - '0');
		d++;
	}
	return (r * g);
}
