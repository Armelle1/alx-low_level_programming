#include "function_pointers.h"

/**
 * print_name - as_isprints a name as is
 * @name: name of the person
 * @f: the parameter
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
