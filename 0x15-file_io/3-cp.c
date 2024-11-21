#include "main.h"

/**
 * print-error - Prints an error message and exits the code
 * Description - A function that prints an error messag age and exits the code
 * @msg: The error message
 * @filename: The name of the file
 * Return: Nothing
 */

void print_error(const char *msg, const char *filename, int exit_code)
{
    dprintf(STDERR_FILENO, msg, filename);
    exit(exit_code);
}

/**
 * main - Copies the content of a file to another file
 * Description - A program that copies the content of a file to another file
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 * 
 * Return: 0 on success, or an error code
 */
int main(int argc, char *argv[])
{
    int file_from, file_to;
    ssize_t bytes_read, bytes_written;
    char buffer[Buffer_Size];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        print_error("Error: Can't read from file %s\n", argv[1], 98);

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1) {
        close(file_from);
        print_error("Error: Can't write to %s\n", argv[2], 99);
    }

    while ((bytes_read = read(file_from, buffer, Buffer_Size )) > 0) {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            close(file_from);
            close(file_to);
            print_error("Error: Can't write to %s\n", argv[2], 99);
        }
    }
    if (bytes_read == -1) {
        close(file_from);
        close(file_to);
        print_error("Error: Can't read from file %s\n", argv[1], 98);
    }

    if (close(file_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }
    if (close(file_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return 0;
}
