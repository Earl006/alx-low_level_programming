#include "main.h"

/**
 * _strlen - A function that returns the legnth of a string
 * @s: contains the string
 * Return: legnth
 */

int _strlen(char *s)
{
	int legnth = 0;

	while (*s != '\0')
	{
		legnth++;
		s++;
	}
	return (legnth);
}
