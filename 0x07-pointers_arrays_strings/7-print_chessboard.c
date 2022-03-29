#include "main.h"
#include <stddef.h>
/**
 * print_chessboard- a function that prints chessboard
 * @a:char* bytes
 * Return:void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char *temp;

	for (i = 0; i < 8; i++)
	{
		temp = *(a + i);
		for (j = 0; j < 8 ; j++)
		{
			_putchar(*(temp + j));
		}
		_putchar('\n');
	}
}
