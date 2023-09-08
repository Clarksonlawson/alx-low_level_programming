#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void) {
    char letter;

    letter = 'a';

    while (letter <= 'z') {
        if (letter != 'e' && letter != 'q') {
            putchar(letter);
        }
        letter++;
    }

    putchar('\n');

    return 0;
}

