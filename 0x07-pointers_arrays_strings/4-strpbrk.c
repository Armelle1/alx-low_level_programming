#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s:char* bytes
 * @accept: char* bytes
 * Return: a pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int n;
	char *p;

	for (n = 0; *s != '\0'; s++, n++)
	{
		for (p = accept; *p != '\0' && *p != *s; p++)
			;
		if (*p == *s)
			return (s);
	}
	return (NULL);
}
