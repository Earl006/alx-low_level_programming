#include <stdio.h>
/**
 * main - A program that prints all combinations of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
