#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assigns a number to variable n, and prints positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is zero\n");
	else 
		printf("%d is negatie\n");

	return (0);
}
