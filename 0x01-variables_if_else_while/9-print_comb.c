#include <stdio.h>
/**
 * main - A program that prints all combinations of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = i + 1 ; j < 10 ; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
}
}
}
putchar('\n');
return (0);
}
