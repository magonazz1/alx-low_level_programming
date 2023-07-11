#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: the name of the file to create
 *
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int retr;
	ssize_t leng, wr;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		leng = strlen(text_content);
		wr = write(fd, text_content, leng);

		if (wr != leng)
		{
			close(fd);
			return (-1);
		}
	}
	retr = close(fd);

	if (retr == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
