#include "main.h"

/**
 * *cap_string - A function that capitalises all words of a string
 * @s: String
 * Return: s
 */
char *cap_string(char *s)
{
	int  i;
	int cap = 1;

	for  (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			cap = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}
	}
return (s);
}
