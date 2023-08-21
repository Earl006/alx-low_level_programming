#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: retun value
 * @src: source pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
