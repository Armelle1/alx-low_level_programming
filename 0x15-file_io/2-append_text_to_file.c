#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 *append_text_to_file - appends text at the end of a file
 *@filename:the character
 *@text_content:the parameter
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
