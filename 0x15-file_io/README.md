0x15-file_io

0. A function that reads a text file and printd it to the POSIX standard output (Tread lightly, she is near)

	* Prototype: ssize_t read_textfile(const char *filename, size_t letters);
	* where letters is the number of letters it should read an print
	* returns the actual number of letters it could read and print
	* if the file can not be opended or read, return 0
	* if filename is NULL return 0
	* if write fails or does not write the expected amount of bytes, return 0


1. A function that creates a file. (Under the snow)

	* Prototype: int create_file(const char *filename, char *text_content);
	* where filename is the name if the name of the file tocreate and text_content is a NULL terminated string to write to the file
	* Returns: 1 on success, -1 on failure(file can not be created, file con not be written, write "fails", etc..)
	* The create file must have those permissions: rw-------. if the file already exists, donot change the permsissions
	*if the file already exists, truncate it
	* if filename is NULL return -1
	* if text_content is NULL create an empty file


2. A functionPrototype: int append_text_to_file(const char *filename, char *text_content); that appends text at the end of a file. (Speak gently, she can hear)

	* Prototype: int append_text_to_file(const char *filename, char *text_content);
	* where filename is the name of the file an text_content is the NULL terminated string to add at the end of the file
	* Return: 1 on success and -1 on failure
	* Do not create the file if it does not exist
	* If filename is NULL return -1
	* If text_content is NULL, do not add anything to the file, Return 1 if the file exists and -1 if the file does not exist or if you do  not have the requires permsissions to write the file


3.A program that copes the conent of a file to another file (cp)

	* Usage: cp file_from file_to
	* if number of argument is not the correct one, exit with the code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
	* if file_to already exists, truncate it
	* if file_from does not exist, or if you can read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followe by a new line, on the POSIX standard error
		* where NAME_OF_THE_FILE is the first argument passed to your program
	 * if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error

		* where NAME_OF_THE_FILE is the second argument passed to your program
	* if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
		* where FD_VALUE is the value of the file descriptor
	* Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
	* You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
	* Allowed to use dprintf


4. A program that displays the information contained in the ELF header at the start of the ELF file. (elf)

	* Usage: elf_header elf_filename
	* Displayed information: (no less, no more, do not include trailing whitespace)
		* Magic
		* Class
		* Data
		* Version
		* OS/ABI
		* ABI Version
		* Type
		* Entry point address

	* Format: the same as readelf -h (version 2.26.1)
	* If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
	* Not allowed to use lseek once
	* Not allowed to use read a maximum of 2 times at runtime
	* Allowed to have as many functions as you want in your source file
	* Allowed to use printf
