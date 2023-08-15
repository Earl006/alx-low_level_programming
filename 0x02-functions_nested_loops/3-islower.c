#include "main.h"
/**
 * _islower - checks for a lowercase character
 * @c: the character to be searched
 * Return: 1 for lowercase character and 0 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
