#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the pointer
 * @src:the pointer
 * @n: a unsigned int
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
