#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @b: the char to fill
 * @n:first n bytes
 * @s: a pointer
 * Return: a pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
