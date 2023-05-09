#include "main.h"
/**
 * read_textfile - function that reads a text and prints it to thr POSIX stdout
 *
 * @filename: the file containing the text
 *
 * @letters: number of letters it could read and print
 *
 * Return: the actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 *		if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_rd, bytes_wr;
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_rd = read(fd, buffer, letters);

	if (bytes_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);

	if (bytes_wr == -1 || bytes_wr != bytes_rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_rd);
}
