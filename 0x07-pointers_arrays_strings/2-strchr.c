#include "main.h"

/**
 * *_strchr - A function that locates the first occurence of a character c
 * @s: A pointer to the string
 * @c: A character to search for
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
return (NULL);
}
