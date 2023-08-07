#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *filename);
void _close(int fd);

/**
 * create_buffer - function that allocate 1024 bytes
 *
 * @filename: The name of the file
 *
 * Return: returns a pointer to new allocate byte
 */

char *create_buffer(char *filename)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);

	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (ptr);
}

/**
 * _close - function that Closes file descriptors.
 * @fd: The file descriptor
 *
 * Return: returns void
 */
void _close(int fd)
{
int ch;
ch = close(fd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - programm that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: returns 0 on success.
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, r, w;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	filefrom = open(argv[1], O_RDONLY);
	r = read(filefrom, buffer, 1024);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (filefrom == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(fileto, buffer, r);
		if (fileto == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(filefrom, buffer, 1024);
		fileto = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buffer);
	_close(filefrom);
	_close(fileto);
	return (0);
}
