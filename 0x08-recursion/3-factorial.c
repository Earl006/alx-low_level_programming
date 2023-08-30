#include "main.h"

/**
 * factorial - A function that returns the factorial of a number
 * @n: Contains the number
 * Return: n*factorial(n-1)
 */
int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
