#include <stdlib.h>
#include <stdio.h>

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the path to the file
 * @letter: the number of letter it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL, return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed, chars_read;
	int fd;
	char *content;

	content = malloc(sizeof(char) * letters);

	if (content == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	chars_read = read(fd, content, letters);

	if (chars_read == -1)
		return (0);

	printed = write(STDOUT_FILENO, content, letters);

	if (printed == -1)
		return (0);

	close(fd);
	return (printed);
}
