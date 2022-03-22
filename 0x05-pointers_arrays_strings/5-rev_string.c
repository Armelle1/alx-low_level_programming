#include "main.h"
/**
 * rev_string- prints a string in reverse
 *@s: parameter;
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char readedchar;
	int numberofchar = 0;
	int i;
	char reverse[500];
	int c = 0;

	readedchar = *(s + numberofchar);
	while (readedchar != '\0')
	{
		numberofchar++;
		readedchar = *(s + numberofchar);
	}
	for (i = numberofchar - 1; i >= 0; i--)
	{
	reverse[c] = *(s + i);
	c++;
	}
	for (c = 0; c < numberofchar; c++)
	{
		*(s + c) = reverse[c];
	}
}
