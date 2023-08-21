#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: Contains the string
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
