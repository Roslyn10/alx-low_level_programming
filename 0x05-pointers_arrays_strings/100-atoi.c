#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * Description - Converts a string to a given integer
 * @s: Given integer
 * Return : 0 Always (Success)
 */
int _atoi(char *s)
{
	int g = 1, d = 0;
	unsigned int r = 0;

	while (!(s[d] <= '9' && s[d] >= '0') && s[d] != '\0')
	{
		if (s[d] == '-')
			g *= -1;
		d++;
	}
	while (s[d] <= '9' && (s[d] >= '0' && s[d] != '\0'))
	{
		r = (r * 10) + (s[d] - '0';
				d++;
	}
	r *= g;
	return (g);
}
