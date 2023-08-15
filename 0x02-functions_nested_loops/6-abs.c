#include "main.h"
/**
 * _abs - A function that computes the absolute value of an interger
 * @n: contains the value of the integer
 * Return: -n if n < 0 && n if n > 0 otherwise 0
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
return (0);
}
