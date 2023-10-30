#include "main.h"
/**
 * read_textfile - function that reads test and then prints the test
 * @filename: pointer to a sting called filename
 * @letters: numbers of letter to be printed
 * Return: The number of character printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numbrd, numbwr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	numbrd = read(fd, buff, letters);
	numbwr = write(STDOUT_FILENO, buff, numbrd);

	close(fd);

	free(buff);

	return (numbwr);
}
