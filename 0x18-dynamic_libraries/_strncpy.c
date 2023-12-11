#include "main.h"

/**
 * _strncpy - Copies up to n characters from one string to another
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && (*dest++ = *src++))
		;

	while (n-- > 0)
		*dest++ = '\0';

	return (ptr);
}

