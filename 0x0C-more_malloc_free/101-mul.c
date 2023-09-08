#include <stdlib.h>

int is_number(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return (0);
        }
        str++;
    }
    return (1);
}

int multiply(char *num1, char *num2) {
    if (!is_number(num1) || !is_number(num2))
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    int x = atoi(num1);
    int y = atoi(num2); 
    int digits[10];
    int digitCount = 0;

    int product = x * y;

    if (product == 0) {
        _putchar('0');
    } else {
        if (product < 0) {
            _putchar('-');
            product = -product;
        }


        while (product > 0) {
            digits[digitCount] = product % 10;
            product /= 10;
            digitCount++;
        }
        for (i = digitCount - 1; i >= 0; i--) {
            _putchar(digits[i] + '0');
        }
    }

    _putchar('\n');

    return 0;
}

