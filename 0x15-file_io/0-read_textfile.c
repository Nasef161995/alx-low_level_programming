#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function that  Reads and prints text file
 *
 * @filename: pointer to the text file
 * @letters: The number of letteers
 *
 * Return: returns actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(ptr);
		return (0);
	}
free(ptr);
close(o);
return (w);
}
