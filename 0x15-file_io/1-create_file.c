#include <stdio.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - Creates a file
 * Description - A function that creates a file
 * @filename: Pointer to a character arraythat represents the name of the file
 * @text_content: Pointer to the first character of a null-terminating string
 * Return: 1 on success, -1 on failure and when filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd; /**file Descriptor**/
	ssize_t bwritten;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bwritten = write(fd, text_content, strlen(text_content));
		if (bwritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

