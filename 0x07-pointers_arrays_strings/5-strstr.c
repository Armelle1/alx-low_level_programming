#include "main.h"
#include <stddef.h>
/**
 * _strstr- a function that locates a substring
 * @haystack:char* bytes
 * @needle: char* bytes
 * Return: a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	while (*haystack != '\0')
	{
		for (p = needle; *(p + 1) != '\0' && *p != *haystack; p++)
			;
		if (*p == *haystack && *(p + 1) == '\0')
			return (needle);
		haystack++;
	}
	return (NULL);
}
