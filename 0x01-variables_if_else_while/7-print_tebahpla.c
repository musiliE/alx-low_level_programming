#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
