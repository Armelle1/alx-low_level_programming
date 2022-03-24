#include "main.h"
/**
 *string_toupper - string to upper
 *@str: the parameter
 * Return: pointer.
 */
char *string_toupper(char *str)
{
	char readedchar;
	int indexnumber = 0;

	readedchar = *(str + indexnumber);
	while (readedchar != '\0')
	{
		if (readedchar >= 'a' && readedchar <= 'z')
			*(str + indexnumber) = readedchar - 32;
		indexnumber++;
		readedchar = *(str + indexnumber);
	}
	return (str);
}
