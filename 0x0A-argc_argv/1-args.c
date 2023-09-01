#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed onto it
 * @argc: A library that counts the arguments passed
 * @argv: A libary that stores an array of strings passed
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

