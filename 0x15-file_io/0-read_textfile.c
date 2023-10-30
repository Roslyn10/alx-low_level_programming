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
	FILE *file;
	char *buffer;
	size_t bread;
	ssize_t bwritten;

	if (!filename)
	{
		return (-1);
	}
	file = fopen(filename, "r");
	if (!file)
	{
		return (-1);
	}
	buffer = (char *)malloc(letters + 1);
	if (!buffer)
	{
		fclose(file);
		return (-1);
	}
	bread = fread(buffer, 1, letters, file);
	if (bread <= 0)
	{
		free(buffer);
		fclose(file);
		return (-1);
	}
	buffer[bread] = '\0';
	bwritten = write(STDOUT_FILENO, buffer, bread);
	if (bwritten < 0 || (size_t)bwritten != bread)
	{
		free(buffer);
		fclose(file);
		return (-1);
	}
	free(buffer);
	fclose(file);
	return (bread);
ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *file;
        char *buffer;
        size_t bread;
        ssize_t bwritten;

        if (!filename)
        {
                return (-1);
        }
        file = fopen(filename, "r");
        if (!file)
        {
                return (-1);
        }
        buffer = (char *)malloc(letters + 1);
        if (!buffer)
        {
                fclose(file);
                return (-1);
        }
        bread = fread(buffer, 1, letters, file);
        if (bread < 0)
        {
                free(buffer);
                fclose(file);
                return (-1);
        }
        buffer[bread] = '\0';
        bwritten = write(STDOUT_FILENO, buffer, bread);
        if (bwritten < 0 || (size_t)bwritten != bread)
        {
                free(buffer);
                fclose(file);
                return (-1);
        }
        free(buffer);
        fclose(file);
        return (bread);
}
