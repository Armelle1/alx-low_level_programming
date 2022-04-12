#include "dog.h"
#include "stdio.h"
/**
 * print_dog - print a struct
 *@d: the character
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if ( d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name : (nil)");
		}
		else if (d->owner == NULL)
		{
			printf("Owner : (nil)");
		}
		else
		{
			printf("Name : %s\n", d->name);
			printf("Age : %.6f\n", d->age);
			printf("Owner : %s\n", d->owner);
		}
	}
}
