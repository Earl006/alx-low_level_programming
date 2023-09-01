#include <stdio.h>
/**
 * main - A program that prints its name
 * @argc: Static library with the number of cmd lines
 * @argv: Static library with array containing all cmd lines
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
