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
	if (readedchar == '\0' && readedchar2 == '\0')
		return (0);
	else if (readedchar == '\0')
		return (-15);
	else
		return (15);
}
