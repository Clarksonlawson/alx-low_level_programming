#include "main.h"
char *_strcpy(char *dest, char *src) {
    char *start = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Ensure the destination string is null-terminated
    return start;
}

