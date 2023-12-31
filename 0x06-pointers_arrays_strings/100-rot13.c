#include "main.h"

/**
 * *rot13 - A function that encodes a string using rot 13
 * @s: the string
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			s[i] += 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			s[i] -= 13;
		}
	}
return (s);
}
