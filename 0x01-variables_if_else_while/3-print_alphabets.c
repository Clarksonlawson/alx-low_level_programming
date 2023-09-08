#include <stdio.h>

int main(void) {
    char lowercase;
    char uppercase;

    lowercase = 'a';

    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    uppercase = 'A';

    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}

