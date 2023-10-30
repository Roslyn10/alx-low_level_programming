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
	int fd_from, fd_to;
	char buffer[Buffer_Size];
	ssize_t bread;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n",argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	while ((bread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, bread) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (bread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if(close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", fd_to);
		exit(100);
	}
	return (0);
}
