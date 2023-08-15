#include "main.h"
/**
 * print_to_98 - A function that prints natural numbers from n to 98
 * @n: Contains the current number
 * Return: all natural nmbers below 98
 */
void print_to_98(int n)
{
while (n != 98)
{
_putchar(n);
_putchar(',');
if (n > 98)
{
n--;
}
else
{
n++;
}
}
_putchar(' ');
}
