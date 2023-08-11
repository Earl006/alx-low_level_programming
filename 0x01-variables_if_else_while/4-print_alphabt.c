#include <stdio.h>
/**
 * main - A program that prints all the alphabets except q&&e
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i == 'e' || i == 'q')
{
i++;
}
putchar(i);
}
putchar('\n');
return (0);
}
