#include "main.h"

/**
 * *_memset - A function that fills the first n bytes of memory area
 * @s: Pointer to the memory area
 * @b: The constant byte
 * @n: The no. of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
