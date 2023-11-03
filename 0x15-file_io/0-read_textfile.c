#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 * Description - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to a character array that represents the name of the file
 * @letters: Specifies the number of letters you want to read
 * Return: 0 if file is NULL, if the file con not be opened and if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int j, w;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	j = read(fd, buffer, letters);
	if (j < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[j] = '\0';
	close(fd);
	w = write(STDOUT_FILENO, buffer, j);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (w);
}
