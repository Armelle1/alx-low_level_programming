#include "main.h"
#include <stddef.h>
/**
 * _strspn - a function that gets length of a prefix substring
 * @s:char* bytes
 * @accept: char* bytes
 * Return: a pointer dest
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;
	char *p;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}
