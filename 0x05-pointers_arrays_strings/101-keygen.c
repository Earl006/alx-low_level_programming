#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random passowrds
 * Return: 0 Always
 */
int main(void)
{
	char password[100];
	int index = 0;
	int sum = 0;
	int target_sum = 2772;

	srand(time(NULL));

	while (sum < target_sum)
	{
	password[index] = rand() % 94 + 33;
	sum += password[index];
	index++;
	}

	if (sum != target_sum)
	{
	password[index - 1] -= (sum - target_sum);
	}

	password[index] = '\0';

	printf("Random valid password: %s\n", password);

	return (0);
}

