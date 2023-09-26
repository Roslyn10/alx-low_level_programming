#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_buffer - A function that prints a buffer
 * Description - Prints a buffer
 * @b: Buffer
 * @size: Size
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int p, q, r, s;

	p = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		q = size - p <10 ? size - p : 10;
		printf("%	
