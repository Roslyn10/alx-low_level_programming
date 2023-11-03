#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdarg.h>

#define Buffer_Size 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void e_exit(int code, const char *format, ...);
int main(int argc, char *argv[]);

/**
 * Elf headers
 */

void check_file(unsigned char *elf_iden);
void print_magic(unsigned char *elf_iden);
void print_class(unsigned char *elf_iden);
void print_data(unsigned char *elf_iden);
void print_version(unsigned char *elf_iden);
void print_abi(unsigned char *elf_iden);
void print_osabi(unsigned char *elf_iden);
void print_type(unsigned int elf_type, unsigned char *elf_iden);
void print_entry(unsigned long int elf_entry, unsigned char *elf_iden);
void close_elf(int elf);

#endif /**MAIN_H**/

