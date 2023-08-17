#include "main.h"
/**
 * _isdigit - A function that checks for a digit 0 thru 9
 * @c: Contains digit to be checked
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
