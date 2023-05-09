#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename:  the name of the file
 *
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rtv;
	ssize_t leng;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	leng = strlen(text_content);

	rtv = write(fd, text_content, leng);

	if (rtv == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
