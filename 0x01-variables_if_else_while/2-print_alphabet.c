#include <stdio.h>
/**
 * main - A program that prints a to z in lowercase using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
