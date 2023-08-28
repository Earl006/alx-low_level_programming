#include "main.h"

/**
 * *_strchr - A function that locates the first occurence of a character c
 * @s: A pointer to the string
 * @c: A character to search for
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	char *cpy = s;

	while (*cpy != '\0')
	{
		if (*cpy == c)
		{
			return (cpy);
		}
		else
		{
		cpy++;
		}
	}
return (NULL);
}
