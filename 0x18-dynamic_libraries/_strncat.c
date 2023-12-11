#include "main.h"

/**
 * _strncat - Concatenates n characters of two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to concatenate
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
		dest++;

	while (n-- && (*dest++ = *src++))
		;

	return (ptr);
}
