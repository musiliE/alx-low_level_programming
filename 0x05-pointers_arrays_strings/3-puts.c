#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of a string
 */

void _puts(char *str) 
{
	while (*str != '\0') 
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
