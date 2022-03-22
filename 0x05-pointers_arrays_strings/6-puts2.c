#include "main.h"
/**
 * puts2 - prints every other character
 *@str: parameter;
 * Return: void
 */
void puts2(char *str)
{
	char readedchar;
	int numberofchar = 0;

	readedchar = *(str + numberofchar);
	while (readedchar != '\0')
	{
		if ((numberofchar % 2) == 0)
		{
			_putchar(*(str + numberofchar));
		}
		numberofchar++;
		readedchar = *(str + numberofchar);
	}
	_putchar('\n');
}
