#include "main.h"
/**
 *reverse_array- prints a string in reverse
 *@a: parameter
 *@n: parameter
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{

	int i;
	int c = 0;
	int reverse[500];
for (i = n - 1; i >= 0; i--)
{
	reverse[c] = *(a + i);
	c++;
}
for (c = 0; c < n; c++)
{
	*(a + c) = reverse[c];
}
}
