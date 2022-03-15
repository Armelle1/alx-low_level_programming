#include "main.h"
/**
 * print_last_digit - print and return the value of the last digit..
 *@n :the integer.
 * Return: last digit.
 */
int print_last_digit(int n)
{
int value = n;
if (n < 0)
	value = -n;
while (value > 10)
	value = value % 10;
_putchar('0' + value);
return (value);
}
