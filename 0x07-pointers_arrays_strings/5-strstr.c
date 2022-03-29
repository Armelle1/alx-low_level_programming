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
	int i;

	while (*haystack != '\0')
	{
		for (p = needle, i = 0; *p != '\0' && *p == *(haystack + i); p++,i++)
			;
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
