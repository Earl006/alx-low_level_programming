#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: Contains the strinf tho be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	(_print_rev_recursion(s + 1));
	_putchar(*s);
}
