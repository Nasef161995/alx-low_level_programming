#include "main.h"

/**
 * _strlen - function returns the length of character array
 * @p: pointer to the string
 * Return: returns number of characters
 */

size_t _strlen(char *p)
{
	size_t x;

	for (x = 0; p[x]; x++)
	;
	return (x);
}


/**
 * append_text_to_file - function that appends text at the end of a text file
 * @filename: name of the text file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: returns 1 on success and -1 on failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd1;
	ssize_t len;

	if (filename == NULL)
	return (-1);
	fd1 = open(filename, O_WRONLY | O_APPEND);
	if (fd1 == -1)
	return (-1);
	if (text_content != NULL)
	len = write(fd1, text_content, _strlen(text_content));
	close(fd1);
	if (len == -1)
	return (-1);
	return (1);
}
