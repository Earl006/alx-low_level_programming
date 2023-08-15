#include "main.h"
/**
 * _isalpha - a function that checks for an alphabetic character
 * @c: contains the character
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
