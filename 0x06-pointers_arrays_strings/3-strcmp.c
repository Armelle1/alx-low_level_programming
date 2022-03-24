#include "main.h"
/**
 *_strcmp- check the code
 *@s1: the parameter
 *@s2: the parameter
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	char readedchar;
	int indexnumber = 0;
	char readedchar2;


	readedchar = *(s1 + indexnumber);
	readedchar2 = *(s2 + indexnumber);
	while (readedchar != '\0' && readedchar2 != '\0')
	{
		indexnumber++;
		readedchar = *(s1 + indexnumber);
		readedchar2 = *(s2 + indexnumber);
	}
	indexnumber--;
	if (readedchar == '\0' && readedchar2 == '\0')
		return (*(s1 + indexnumber) - *(s2 + indexnumber));
	else
		return (readedchar - readedchar2);
}
