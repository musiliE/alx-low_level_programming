#include "main.h"

 /**
 * print_number - a function that prints an integer
 * @n: input
 * Return: the input integer
 */
void print_number(int n) {
    int num_digits = 0;
    int temp = n;

    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }
    if (n == 0) {
        _putchar('0');
        return;
    }
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    for (int i = 0; i < num_digits; i++) {
        int digit = n % 10;
        n /= 10;
        _putchar(digit + '0');
    }
}
