#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
	putchar (i + '0');

}
for (j = 0; j <= 5; j++)
{
	putchar (j + 'a');
}
putchar('\n');
return (0);
}
