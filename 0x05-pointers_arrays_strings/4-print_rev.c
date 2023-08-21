#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: Contains the string
 * Return: void
 */
void print_rev(char *s)
{
	int legnth = 0;

	while (s[legnth] != '\0')
	{
		legnth++;
	}
	for (int i = legnht - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
