#include <stdio.h>
/**
 * main - A program that prints out base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0 ; i <= 16 ; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else if (i > 10)
{
putchar(i - 10 + 'a');
}
}
putchar('\n');
return (0);
