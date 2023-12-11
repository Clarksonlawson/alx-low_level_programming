#include <unistd.h>
#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

