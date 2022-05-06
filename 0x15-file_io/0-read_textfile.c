#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 *read_textfile - check the code
 *@filename:the character
 *@letters:the parameter
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int c;
	int z;
	int fd;

	char *buf = (char *) malloc((sizeof(char) * letters) + 1);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == 0)
	{
		return (0);
	}
	c = read(fd, buf, letters);
	buf[c] = '\0';
	z = write(STDOUT_FILENO, buf, letters);
	printf("%d %d", c, z);
	if ((z == -1) || (z != c))
		return (0);
	return (c);
}
