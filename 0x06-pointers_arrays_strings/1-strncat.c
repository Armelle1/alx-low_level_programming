#include "main.h"
/**
 * _strncat- concatenate two strings
 *@dest: pointer
 *@src: pointer
 *@n : int
 * Return: char*.
 */
char *_strncat(char *dest, char *src, int n)
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
	numberofchar--;
	while (n > 0 && readedchar2 != '\0')
	{
		readedchar2 = *(src + numberofchar2);
		*(dest + numberofchar) = readedchar2;
		numberofchar2++;
		numberofchar++;
		n--;
	}
	numberofchar--;
	*(dest + numberofchar) = readedchar2;
	return (dest);
}
