#include "main.h"
/**
 *_strncpy - copies the tring.
 *@dest: parameter;
 *@src: parameter
 *@n: parameter
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char readedchar;
	int numberofchar = 0;

	readedchar = *(src + numberofchar);

	while (n > 1 && readedchar != '\0')
	{
		*(dest + numberofchar) = readedchar;
		numberofchar++;
		readedchar = *(src + numberofchar);
		n--;
	}
	*(dest + numberofchar) = readedchar;
	return (dest);
}
