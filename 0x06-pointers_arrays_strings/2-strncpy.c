#include "main.h"

/**
 * *_strncpy - A function that copies a string
 * @dest: Stores the copied string
 * @src: Stores the string to be copied
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}
