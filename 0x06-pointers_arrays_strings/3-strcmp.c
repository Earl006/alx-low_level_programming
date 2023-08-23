#include "main.h"

/**
 * _strcmp - A function that comapres two strings
 * @s1: contains the first string to be compared
 * @s2: contains the second string to be compared
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
return (*s1 - *s2);
}
