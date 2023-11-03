#include "main.h"

/**
 * main - Copies the content of a file to another file
 * Description - A program that copies the content of a file to another file
 * @argc: An integer that represents the number of command_line arguments
 * @argv: An array of strings that contain the command_line arguments
 * Return: 98 if file_form doesnt exist, or 99 if write fails
 */

int main(int argc, char *argv[])
{
	int fdr, fdw, y, n, o;
	char buffer[Buffer_Size];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((y = read(fdr, buffer, Buffer_Size)) > 0)
	{
		if (fdw < 0 || write(fdw, buffer, y) != y)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdr);
			exit(99);
		}
	}
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n = close(fdr);
	o = close(fdw);
	if (n < 0 || o < 0)
	{
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		if (o < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
			exit(100);
	}
	return (0);
}
