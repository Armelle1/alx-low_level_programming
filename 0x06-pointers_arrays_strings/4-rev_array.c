#include "main.h"
/**
 *reverse_array- prints a string in reverse
 *@a: parameter
 *@n: parameter
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int readedint;
	int numberofint = 0;
	int i;
	int reverse[500];
	int c = 0;

	readedint = *(a + numberofint);
while (readedint != '0')
{
	numberofint++;
	readedint = *(a + numberofint);
}
for (i = numberofint - 1; i >= 0; i--)
{
	reverse[c] = *(a + i);
	c++;
}
for (c = 0; c < numberofint; c++)
{
	*(a + c) = reverse[c];
}
}
