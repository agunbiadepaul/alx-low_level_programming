#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error_and_exit - Print an error message to stderr and exit.
 * @message: The error message to print.
 *
 * This function prints an error message to stderr and exits the program with
 * status code 98.
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information from the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 *
 * This function prints various information from the ELF header to stdout.
 */
void print_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               %lx\n",
			(unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * This function is the entry point of the program.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_error_and_exit("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		print_error_and_exit("Error: Unable to open file");

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		print_error_and_exit("Error: Unable to read ELF header");
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_error_and_exit("Error: Not an ELF file");
	}

	lseek(fd, 0, SEEK_SET);

	printf("ELF Header:\n");
	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
