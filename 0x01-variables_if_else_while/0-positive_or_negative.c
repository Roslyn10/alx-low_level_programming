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

	printf("%d is", n);
 
	if (n > 0)
		printf(" positive\n");
	else if (n == 0)
		printf("zero\n");
	else 
		printf("negatie\n");

	return (0);
}
