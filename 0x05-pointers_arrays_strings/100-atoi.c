#include "main.h"

/**
 * _atoi - A function that converts a string to int
 * @s: String to be converted
 * Return: result * sign
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	long long i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
	if (s[i] == '-')
	{
	sign *= -1;
	}
	i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (result * sign);
}
