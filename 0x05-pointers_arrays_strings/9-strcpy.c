#include "main.h"
/**
 *_strcpy - copies the tring
 *@dest: parameter;
 *@src: parameter
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char readedchar;
	int numberofchar = 0;

	readedchar = *(src + numberofchar);
	while (readedchar != '\0')
	{
		*(dest + numberofchar) = readedchar;
		numberofchar++;
		readedchar = *(src + numberofchar);
	}
	*(dest + numberofchar) = readedchar;
	return (dest);
}
