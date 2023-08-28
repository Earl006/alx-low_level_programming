# include "main.h"

/**
 * *_memcpy - A function that copies n bytes from the src memmory area
 * @dest: A pointer to the destination memmory area
 * @src: A pointer to the source memory area
 * @n: Number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
