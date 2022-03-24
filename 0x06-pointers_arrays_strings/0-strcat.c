#include "main.h"
/**
 * _strcat- concatenate two strings
 *@dest: pointer
 *@src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char readedchar1 = ' ';
	char readedchar2 = ' ';
	int numberofchar2 = 0;
	int numberofchar = 0;

	while (readedchar1 != '\0')
	{
		readedchar1 = *(dest + numberofchar);
		numberofchar++;
	}

	while (readedchar2 != '\0')
	{
			readedchar2 = *(src + numberofchar2);
	*(dest + numberofchar) = readedchar2;
	numberofchar2++;
	numberofchar++;
	}
	*(dest + numberofchar) = readedchar2;
	return (dest);
}
