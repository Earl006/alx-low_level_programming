#include <stdio.h>
/**
 * main - A program that prints all the arguments it receives
 * @argc: A library that stores the count
 * @argv: A library that stores the arguments in an array
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
