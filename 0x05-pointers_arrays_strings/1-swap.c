#include "main.h"

/**
 * swap_int - A function that swaps values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
