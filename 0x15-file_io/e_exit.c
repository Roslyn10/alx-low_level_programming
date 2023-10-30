#include "main.h"

/**
 * e_exit - Exit the program wih an error code and prints an error message
 * Description - A function used to exit the program with an error code
 * @code: The error code that the program should exit with
 * @format: A string that specifies how the error message should be formated
 * @arg: Used to provide a specific value that will be replaace the %s placeholder
 * Return: Nothing
 */

void e_exit(int code, const char *format, ...)
{
	va_list args;
	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);

	va_end(args);
	exit(code);
}
