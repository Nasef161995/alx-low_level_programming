#include "main.h"

/**
 * create_file -function that creates a text file
 * @filename: is the name of text file
 *
 * @text_content: is a NULL terminated string to write to text file
 * Return: returns 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int fd1, fd2, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	fd1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd2 = write(fd1, text_content, len);
	if (fd1 == -1 || fd2 == -1)
	return (-1);
	close(fd1);
	return (1);
}
