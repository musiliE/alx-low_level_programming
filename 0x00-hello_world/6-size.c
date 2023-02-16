#include <stdio.h>
/**
 * main function = entry point
 *
 * returns: 0 always
 */
int main() {
    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("Size of short: %d byte(s)\n", sizeof(short));
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of long: %d byte(s)\n", sizeof(long));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of long double: %d byte(s)\n", sizeof(long double));
    printf("Size of void*: %d byte(s)\n", sizeof(void*));
    return 0;
}

