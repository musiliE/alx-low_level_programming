#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str) 
{
   while (*str != '\0')
   {
      putchar(*str);
      str++;
   }
   putchar('\n');
}
