#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10; /* Calculate the last digit */

	if (last_digit < 0)
	{
		last_digit = -last_digit; /* Make sure it's positive for printing */
	}

	putchar(last_digit + '0'); /* Print the last digit as a character */
	return (last_digit);
}

