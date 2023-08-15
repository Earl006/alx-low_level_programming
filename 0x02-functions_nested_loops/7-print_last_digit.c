#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: Contains the number
 * @num: Contains the result of n%10
 * Return: num
 */
int print_last_digit(int n, int num)
{
num = n % 10;
if (num < 0)
{
num = num * -1;
}
_putchar(last + '0');
return (num);
}
