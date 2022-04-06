#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 *@argc : number of parameter
 *@argv : parameters
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, value;

	for (i = 1; i < argc; i++)
	{
		value = atoi(argv[i]);
		if (value > 0)
			result = result + value;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
