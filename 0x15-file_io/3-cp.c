#include "main.h"

void cpfile(int source_fd, int new_fd);
int parse_args(int argc, char *argv[], char **sourcefile, char **newfile);

/**
 * main - Entry point of a program that copies the content of a file to another
 *
 * @argc: number of args
 *
 * @argv: the args
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	char *sourcefile, *newfile;
	int source_fd, new_fd;

	if (parse_args(argc, argv, &sourcefile, &newfile) != 0)
	{
		return (97);
	}
	source_fd = open(sourcefile, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcefile);
		free(sourcefile);
		free(newfile);
		return (98);
	}
	new_fd = open(newfile, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (new_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newfile);
		free(sourcefile);
		free(newfile);
		close(source_fd);
		return (99);
	}
	cpfile(source_fd, new_fd);

	if (close(source_fd) == -1 || close(new_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				source_fd == -1 ? new_fd : source_fd);
		free(sourcefile);
		free(newfile);
		return (100);
	}
	free(sourcefile);
	free(newfile);
	return (0);
}

/**
 * cpfile - function that copies file identifier from another file
 *
 * @source_fd: the fd to copy from
 *
 * @new_fd: the fd to copy to
 *
 * Return: void
 */
void cpfile(int source_fd, int new_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t num_read;
	ssize_t num_wr;

	while ((num_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		num_wr = write(new_fd, buffer, num_read);
		if (num_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", new_fd);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from fd %d\n", source_fd);
		exit(98);
	}
}
/**
 * parse_args - function that parses arguments
 *
 * @argc: number of the args
 *
 * @argv: the args
 *
 * @sourcefile: where to copy from
 *
 * @newfile: where to copy to
 *
 * Return: Always 0 (success)
 */
int parse_args(int argc, char *argv[], char **sourcefile, char **newfile)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (-1);
	}

	*sourcefile = strdup(argv[1]);

	if (*sourcefile == NULL)
	{
		return (-1);
	}

	*newfile = strdup(argv[2]);

	if (*newfile == NULL)
	{
		free(*sourcefile);
		return (-1);
	}
	return (0);
}

