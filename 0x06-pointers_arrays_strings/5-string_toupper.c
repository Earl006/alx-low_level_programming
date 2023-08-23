#include "main.h"

/**
 * *string_toupper - A function that changes all lowercase char to uppercase
 * @s: String to be converted to uppercase
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
return (s);
}
