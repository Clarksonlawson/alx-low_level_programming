#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void) {
    int number = 0;

    while (number <= 9) {
        putchar(number + '0');
        number++;
    }

    putchar('\n');

    return 0;
}

