#include "main.h"

/**
 * *leet - A function that encodes a string into 1337
 * @s: the string
 * Return: s
 */
char *leet(char *s)
{
	int i;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071401";

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
				break;
			}
		}
	}
return (s);
}
