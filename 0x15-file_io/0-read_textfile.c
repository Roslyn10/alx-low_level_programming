#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 * Description - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to a character array that represents the name of the file
 * @letters: Specifies the number of letters you want to read
 * Return: 0 if file is NULL, if the file con not be opened and if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bread;
	ssize_t bwritten;


	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bread = fread(buffer, sizeof(char), letters, file);
	if (bread == 0 || bread == (size_t)-1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bread] = '\0';

	bwritten = write(fileno(stdout), buffer, bread);
	if (bwritten < 0 || (size_t)bwritten != bread)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bread);
}
