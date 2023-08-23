#include "main.h"

/**
 * print_number - A function that prints a number
 * @n: the int to be printed
 * Return: void
 */
void print_number(int n)
{
	int i, j, div, num_digits;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	for (div = 1, num_digits = 0; num / div > 9; div *= 10, num_digits++)
	{
		;
	}
	for (i = 0; i <= num_digits; i++)
	{
		for (j = 0; j < num / div; j++)
		{
			_putchar('0' + j);
		}
	num %= div;
	div /= 10;
	}
}
