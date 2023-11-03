#include "main.h"
#include "elf.h"

/**
 * check_file - A function that checks if a file is an ELF file.
 * Description - Checks if a file is an ELF file
 * @e_ident: A pointer to an array containing the ELF magic numbers
 * Return: Nothing
 */

void check_file(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if(e_ident[index] != 127 &&
		   e_ident[index] != 'E' &&
		   e_ident[index] != 'L' &&
		   e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - A function that prints magic numbers of an ELF header file
 * Description - Prints the magic numbers of a ELF header file
 * @e_ident: A pointer to an array containing the ELF magic numbers
 * Return: Nothing
 */

void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
 * print_class - A function that prints the class of an ELF header file
 * Description - Prints the class of an ELF header file
 * @e_ident: A pointer to an array containing the ELF class
 * Return: Nothing
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - A function that prints the data of an ELF header file
 * Description - Prints the data of an ELF header file
 * @e_indent: A pointer to an array containing the ELF class
 * Return: Nothing
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}



/**
 * print_version - A function that prints the version of an ELF header file
 * Description - Prints the version of an ELF header file
 * @e_ident: A pointer to an array containing the Elf version
 * Return: Nothing
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d\n", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - A function that prints the OS/ABI of an ELF header file
 * Description - Prints the OS/ABI of an ELF header file
 * @e_ident: A pointer to an array containing he ELF version
 * Return: Nothing
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi A function that prints the ABI version of an ELF header file
 * Description - Prints the ABI version of an ELF header
 * @e_ident: A pointer to an array containing the ELF ABI version
 * Return: Nothing
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - A function that pints the type of an ELF header file
 * Description - Prints the type of an ELF header file
 * @e_type: The ELF type
 * @e_ident: A pointer to an array containing the ELF type
 * Return: Nothing
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = (e_type >> 8) & 0xFF;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry  - A function that prints the entry point of an ELF header file
 * Description - Prints the entry point of an ELF header file
 * @e_entry: The adrees of the ELF entry point
 * @e_ident: A pointer to an array containing the ELf entry
 * Return: Nothing
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			    ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * close_elf - A function that closes the ELF header file
 * Description - Closes the ELF header file
 * @elf: File descriptor of the ELF file
 * Return: Nothing
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - A function that displays the information contained in the Elf file
 * Desciption - Displays the information contained in the ELF header file
 * @argc: Argument count supplied to program
 * @argv: Array of pointers to the arguments
 * Return: 0 Always (Success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int o, r;
	Elf64_Ehdr *header;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(o);
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(98);
	}
	r = read(o, header,sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}

	check_file(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
