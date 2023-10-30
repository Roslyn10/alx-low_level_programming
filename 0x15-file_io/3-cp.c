#include "main.h"

/**
 * main - Copies the content of a file to another file
 * Description - A program that copies the content of a file to another file
 * @argc: An integer that represents the number of command_line arguments
 * @argv: An array of strings that contain the command_line arguments
 * Return: 98 if file_form doesnt exist, or 99 if write fails
 */

int main (int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_source, fd_dest;
	char buffer[Buffer_Size];
	ssize_t bread, bwritten;

	if (argc != 3)
	{
		e_exit(97, "Usage: cp file_from file_to\n", argv[0]);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		e_exit(98, "Error: Can't read from file %s\n", *file_from);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		e_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bread = read(fd_source, buffer, Buffer_Size)) > 0)
	{
		bwritten = write(fd_dest, buffer, bread);
		if (bwritten == -1 || bwritten != bread)
		{
			e_exit(99, "Error: Can'twrite to %s\n", file_to);
		}
	}

	if (bread == -1)
	{
		e_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_source) == -1)
	{
		e_exit(100, "Error: Can't close fd %d\n", fd_source);
	}

	if (close(fd_dest) == -1)
	{
		e_exit(100, "Error: Can't close fd %d\n", fd_dest);
	}

	return (0);
}
