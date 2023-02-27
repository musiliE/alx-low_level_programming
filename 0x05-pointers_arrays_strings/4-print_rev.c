#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
