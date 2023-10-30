#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * Description - A function that appends text at the end of a file
 * @filename: Pointer to a character array that represents the name of the file
 * @text_content: Pointer to the first character of a null-terminating string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bwritten;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	bwritten = write(fd, text_content, strlen(text_content));
	if (bwritten == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
