#include <stdio.h>
#include <stdio.h>

/** print_opcodes - Prints the opcodes of its own main function
 * @size: Number of bytes to be read
 * @start: Pointer to where the opcodes will be read from
 * Return: Nothing
 */

void print_opcodes(unsigned char *start,size_t size)
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		printf("%02x", (unsigned int)start[n]);
		if (n < size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function
 * @argc: Arugument count
 * @argv: Argument Vector
 * Return: 0 if successful, 1 if not correct and 2 if n_b is negative
 */
 
int main(int argc, char *argv[])
{
	int n_b, r;
	unsigned char *start;
	size_t r_s;
	size_t f;

	if (argc != 2)
	{
		printf("Error\n");
		{
			return (1);
		}
	}

	if (n_b < 0)
	{
		printf("Error\n");
		{
			return (2);
		}
	}

	r_s = (size_t)n_b;

	start = (unsigned char *)&main;
	for (f = 0; f < r_s;f++)
	{
		printf("%02x", (unsigned int)start[f]);
		if (f < r_s - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
