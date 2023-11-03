#include "main.h"
#include "elf.h"

/**
 * check_file - A function that checks if a file is an ELF file.
 * Description - Checks if a file is an ELF file
 * @elf_iden: A pointer to an array containing the ELF magic numbers
 * Return: Nothing
 */

void check_file(unsigned char *elf_iden)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if(elf_iden[index] != 127 &&
		   elf_iden[index] != 'E' &&
		   elf_iden[index] != 'L' &&
		   elf_iden[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - A function that prints magic numbers of an ELF header file
 * Description - Prints the magic numbers of a ELF header file
 * @elf_iden: A pointer to an array containing the ELF magic numbers
 * Return: Nothing
 */

void print_magic(unsigned char *elf_iden)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_iden[index]);

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
 * @elf_iden: A pointer to an array containing the ELF class
 * Return: Nothing
 */

void print_class(unsigned char *elf_iden)
{
	printf("  Class:                             ");

	switch (elf_iden[EI_CLASS])
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
			printf("<unknown: %x>\n", elf_iden[EI_CLASS]);
	}
}

/**
 * print_data - A function that prints the data of an ELF header file
 * Description - Prints the data of an ELF header file
 * @elf_inden: A pointer to an array containing the ELF class
 * Return: Nothing
 */

void print_data(unsigned char *elf_iden)
{
	printf("  Data:                              ");

	switch (elf_iden[EI_DATA])
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
			printf("<unknown: %x>\n", elf_iden[EI_CLASS]);
	}
}



/**
 * print_version - A function that prints the version of an ELF header file
 * Description - Prints the version of an ELF header file
 * @elf_iden: A pointer to an array containing the Elf version
 * Return: Nothing
 */

void print_verson(unsigned char *elf_iden)
{
	printf("  Version:                           %d\n", elf_iden[EI_VERSION]);

	switch (elf_iden[EI_VERSION])
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
 * @elf_iden: A pointer to an array containing he ELF version
 * Return: Nothing
 */

void print_osabi(unsigned char *elf_iden)
{
	printf("  OS/ABI:                            ");

	switch (elf_iden[EI_OSABI])
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
			printf("<unknown: %x>\n", elf_iden[EI_OSABI]);
	}
}

/**
 * print_abi A function that prints the ABI version of an ELF header file
 * Description - Prints the ABI version of an ELF header
 * @elf_iden: A pointer to an array containing the ELF ABI version
 * Return: Nothing
 */

void print_abi(unsigned char *elf_iden)
{
	printf("  ABI Version:                       %d\n", elf_iden[EI_ABIVERSION]);
}

/**
 * print_type - A function that pints the type of an ELF header file
 * Description - Prints the type of an ELF header file
 * @e_type: The ELF type
 * @elf_iden: A pointer to an array containing the ELF type
 * Return: Nothing
 */

void print_type(unsigned int e_type, unsigned char *elf_iden)
{
	if (elf_iden[EI_DATA] == ELFDATA2MSB)
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
 * @elf_iden: A pointer to an array containing the ELf entry
 * Return: Nothing
 */

void print_entry(unsigned long int e_entry, unsigned char *elf_iden)
{
	printf("  Entry point address:               ");

	if (elf_iden[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			    ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (elf_iden[EI_CLASS] == ELFCLASS32)
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

int main(int argc, char *argv[])
{
	int o, r;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		return (1);
	}

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (1);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(o);
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		return (1);
	}
	r = read(o, header,sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close(o);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		return (1);
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
	close(o);
	return (0);
}
