#include "main.h"
/**
 *_isdigit - check the digits
 *@c: the character
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 0 && c <= 9))
		return (1);
return (0);
}
