#include "main.h"
/**
 * print_square - prints a square
 *@n: the number of times.
 * Not value to return.
 */
void print_square(int n)
{
int i, j;
if (n <= 0)
	_putchar('\n');
else
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
