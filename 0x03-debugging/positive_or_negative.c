#include "main.h"

/**
 * main - print if the number is positive, negative or zero.
 *
 * Return: Always 0
 */

void positive_or_negative(int i);
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
