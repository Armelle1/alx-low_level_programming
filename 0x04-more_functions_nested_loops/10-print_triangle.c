#include "main.h"
/**
 * print_triangle- prints a triangle
 *@n: the size.
 * Not value to return.
 */
void print_triangle(int n)
{
int i, j;
if (n <= 0)
	_putchar('\n');
else
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
