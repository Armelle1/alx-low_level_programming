#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type sytuct dog
 *@name:The parameter
 *@age: the parameter
 *@owner:the parameter
 *@d: the parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
