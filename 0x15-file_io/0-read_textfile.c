#include "main.h"
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letter should print and read
 * Return: filename is NULL, write is 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_text, write_text;
	char *filedescrip;

	filedescrip = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);

	if (fd == -1)
	{
		return (0);
	}
	if (filedescrip == NULL)
	{
		free(filedescrip);
		return (0);
	}

	read_text = read(fd, filedescrip, letters);
	if (read_text == -1)
	{
		free(filedescrip);
		return (0);
	}
	write_text = write(STDOUT_FILENO, filedescrip, read_text);

	if (write_text == -1)
	{
		free(filedescrip);
		return (0);
	}

	close(fd);
	return (write_text);
}
