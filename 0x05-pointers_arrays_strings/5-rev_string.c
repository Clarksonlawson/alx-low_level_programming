#include <stddef.h>

/**
 * rev_string - Reverses a string in-place.
 * @s: Pointer to the null-terminated string.
 */

void rev_string(char *s)
{
    if (s == NULL)
        return;

    int length = 0;
    int start = 0;
    int end;

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    end = length - 1;
    char temp;

    /* Reverse the string */
    while (start < end)
    {
        /* Swap characters at start and end positions */
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

