#include "main.h"

/**
 * *_strncat - A function that cancatenates two strings using n bytes from src
 * @dest: String to be appended
 * @src: String to append
 * @n: number of bytes of src to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
return (dest);
}
