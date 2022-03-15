#include "main.h"
/**
 * print_last_digit - print and return the value of the last digit..
 *@n :the integer.
 * Return: last digit.
 */
int print_last_digit(int n)
{
int value;
if (n < 0)
	value = -n % 10;
else
	value = n % 10;
_putchar(value + '0');
return (value);
}
