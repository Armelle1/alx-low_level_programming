#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - copy of the string
 *@str: the parameter
 * Return: char*.
 */
char *_strdup(char *str)
{
	char readedchar1 = ' ';
	int numberofchar = 0;
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	while (readedchar1 != '\0')
	{
		readedchar1 = *(str + numberofchar);
		numberofchar++;
	}
	s = malloc((sizeof(char)) * (numberofchar));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= numberofchar; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
