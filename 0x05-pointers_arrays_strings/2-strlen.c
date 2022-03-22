#include "main.h"
/**
 * _strlen- the lengh oh a string.
 *@str:the character
 * Return: the length of a string.
 */
int _strlen(char *str)
{
	int numberofchar = 0;
	char readedchar;

	do {
		readedchar = *(str + numberofchar);
		numberofchar++;
	} while (readedchar != '\0');
	numberofchar--;
	return (numberofchar);
}
