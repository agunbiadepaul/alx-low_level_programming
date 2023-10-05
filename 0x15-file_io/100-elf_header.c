#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

#define BUF_SIZE 64

/**
 * print_error - Print error message to stderr and exit with status 98.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * read_bytes - Read a specified number of bytes from a file descriptor.
 * @fd: The file descriptor.
 * @buf: The buffer to read into.
 * @count: The number of bytes to read.
 */
void read_bytes(int fd, void *buf, size_t count)
{
	ssize_t result;

	result = read(fd, buf, count);
	if (result != (ssize_t)count)
	{
		print_error("Error reading from file");
	}
}

/**
 * char *get_osabi_name - the function get the value of osabi_name
 * @osabi: The value to be maped
 *
 */
const char *get_osabi_name(unsigned char osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV: return "UNIX - System V";
		case ELFOSABI_NETBSD: return "UNIX - NetBSD";
		default: return "Unknown OS/ABI";
	}
}

/**
 * print_elf_header - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ELF%d\n",
			header->e_ident[EI_CLASS] * 32);
	printf("  Data:                              %s\n",
			(header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian"
			: "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			get_osabi_name(header->e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			(header->e_type == ET_EXEC)
			? "EXEC (Executable file)"
			: "DYN (Shared object file)");
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	read_bytes(fd, &header, sizeof(Elf64_Ehdr));

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
