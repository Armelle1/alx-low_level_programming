#include "main.h"
/**
 * _puts - prints a string.
 *@str: parameter;
 * Return: Always 0.
 */
void _puts(char *str)
{
	char readedchar;
	int numberofchar = 0;

	readedchar = *(str + numberofchar);
	while (readedchar != '\0')
	{
		_putchar(readedchar);
		numberofchar++;
		readedchar = *(str + numberofchar);
	}
	_putchar('\n');
}
