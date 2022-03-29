#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locate a character in a string
 * @c:the pointer
 * @s: a string
 * Return: a pointer dest
 */
char *_strchr(char *s, char c)
{
	while  (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
