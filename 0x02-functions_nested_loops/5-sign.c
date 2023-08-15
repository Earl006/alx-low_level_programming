#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 * @n: contains the number
 * Return: 1 if the number>0 && 0 if number==0 && -1 if number<0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
}
