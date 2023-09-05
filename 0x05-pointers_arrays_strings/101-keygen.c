#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
/**
 * main - Generates random valid passwords
 * Description - Generates random valid random passwords for 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pw[100];
	int w, s, k;

	s = 0;

	srand(time(NULL));

	for (w = 0; w< 100; w++)
	{
		pw[w] = rand() % 78;
		s += (pw[w] + '0');
		putchar(pw[w] + '0');

		if ((22772 - s) -'0' < 78)
		{
			k = 2272 - s - '0';
			s += k;
			putchar(k +'0');
			break;
		}
	}
	return (0);
}
