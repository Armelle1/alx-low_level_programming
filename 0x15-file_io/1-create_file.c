#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 *create_file - creates a file
 *@filename:the character
 *@text_content:the parameter
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int z;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_EXCL | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		z = write(fd, text_content, strlen(text_content));
		if (z == -1)
			return (-1);

	}
	close(fd);
	return (1);
}
