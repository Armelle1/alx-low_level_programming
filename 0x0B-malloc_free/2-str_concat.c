#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat- concatenate two strings
 *@s1: the parameter
 *@s2: the parameter
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char readedchar1 = ' ';
	char readedchar2 = ' ';
	int numberofchar = 0;
	int numberofchar2 = 0;
	char *s3;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (readedchar1 != '\0')
	{
		readedchar1 = *(s1 + numberofchar);
		numberofchar++;
	}
	numberofchar--;
	while (readedchar2 != '\0')
	{
		readedchar2 = *(s2 + numberofchar2);
		numberofchar2++;
	}
	numberofchar2--;
	s3 = malloc((sizeof(char)) * (numberofchar + numberofchar2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < numberofchar; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < numberofchar2; i++, j++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
