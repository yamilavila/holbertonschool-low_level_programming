#include "main.h"

/**
 * create_file - creates files
 * @filename: name of the file created
 * @text_content: NULL terminated
 * Return: success 1 or -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _write, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	while (text_content[len])
	{
		len++;
	}
	_write = write(fd, text_content, len);
	if (_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
