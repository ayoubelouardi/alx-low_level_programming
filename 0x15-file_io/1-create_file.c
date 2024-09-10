#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file
 * Description: Longer description of the function)?
 * Return:
 * 1 on success.
 * -1 on failure:
 * file can not be created,
 * file can not be written,
 * write() fails, etc...
 */
int create_file(const char *filename, char *text_content)
{
	int fd;	
	ssize_t size = 0;

	if (text_content != NULL)
		while (text_content[size]!= '\0')
			size++;

	if (filename == NULL)
		return (-1);

	fd = open(filename,
			O_WRONLY | O_EXCL | O_CREAT | O_APPEND,
			0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		size = write(fd, text_content, size);

	if (size == -1)
		return (-1);


	return (1);
}
