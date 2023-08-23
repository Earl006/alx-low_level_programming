#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 * @dest: String to be appended
 * @src: String to append to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
return (dest);
}
