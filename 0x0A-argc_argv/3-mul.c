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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
