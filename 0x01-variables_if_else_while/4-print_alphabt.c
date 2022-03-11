#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c1;
for (c1 = 'a'; c1 <= 'z'; c1++)
{
if (c1 != 'q' && c1 != 'e')
putchar(c1);
}
putchar('\n');
return (0);
}
