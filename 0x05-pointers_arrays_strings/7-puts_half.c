#include "main.h"

/**
 * puts_half - A function that prints half a str
 * @str: Str to be split
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
	length++;
	}

	if (length % 2 == 0)
	{
	start = length / 2;
	}
	else
	{
	start = (length - 1) / 2 + 1;
	}

	for (i = start; i < length; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
