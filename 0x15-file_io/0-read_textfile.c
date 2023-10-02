#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Reads text file and print it.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The number of letters.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		return (0);
	}

	write(1, buffer, read_bytes);

	close(fd);
	return (read_bytes);
}
