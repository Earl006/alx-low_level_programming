#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints an array of integers
 * @n: Number of elements in the array
 * @a: pointer to n
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != n - 1)
	{
		printf(", ");
	}
	}
printf("\n");
}
