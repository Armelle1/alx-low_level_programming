#include "main.h"
/**
 * puts_half - prints the second half of the string
 *@str: parameter;
 * Return: void
 */
void puts_half(char *str)
{
	char readedchar;
	int numberofchar = 0;
	int middle;
	int i;

	readedchar = *(str + numberofchar);
	while (readedchar != '\0')
	{
		numberofchar++;
		readedchar = *(str + numberofchar);
	}
	if ((numberofchar % 2) == 0)
		middle = numberofchar / 2;
	else
	{
		middle = (numberofchar - 1) / 2;
		middle++;
	}
	for (i = middle; i < numberofchar; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
