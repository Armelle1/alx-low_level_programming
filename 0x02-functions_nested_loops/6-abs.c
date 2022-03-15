#include "main.h"
/**
 * _abs - compute the absolute value of an integer.
 *@n :the integer.
 * Return: absolute value.
 */
int _abs(int n)
{
int value;
if (n >= 0)
{
value = n;
}
else if (n < 0)
{
value = n * (-1);
}
return (value);
}
