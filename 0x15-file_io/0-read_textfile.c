#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"


/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: the name of the file.
 * @letters: number of letters it should read and print.
 * Description:
 *
 * Return:
 *
 * returns the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected
 *	amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	number = read(fd, buffer, letters);
	if (number == -1)
		return (0);

	number = write(1, buffer, number);
	if (number == -1)
		return (0);

	free(buffer);
	close(fd);


	return (number);
}
