#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
for (i = 'A' ; i <= 'Z' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
