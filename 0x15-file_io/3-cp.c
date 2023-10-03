#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_and_exit - Prints an error message and exits the program with the
 * specified code.
 * @code: The exit code.
 * @message: The error message format.
 * @arg: The argument for the format.
 */
void error_and_exit(int code, const char *message, const char *arg);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, exit codes on failure.
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error_and_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_and_exit(100, "Error: Can't close fd\n", "");
	}

	return (0);
}

/**
 * error_and_exit - Prints an error message and exits the program with the
 * specified code.
 * @code: The exit code.
 * @message: The error message format.
 * @arg: The argument for the format.
 */
void error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
