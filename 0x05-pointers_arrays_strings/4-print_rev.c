#include "main.h"
/**
 * print_rev - prints a string in reverse
 *@s: parameter;
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char readedchar;
	int numberofchar = 0;
	int i;

	readedchar = *(s + numberofchar);
	while (readedchar != '\0')
	{
		numberofchar++;
		readedchar = *(s + numberofchar);
	}
	for (i = numberofchar - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
