#include "main.h"

/**
 * puts2 - A function that prints every char
 * @str: char to be printed
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		_putchar('\n');
		*str++;
	}
}
