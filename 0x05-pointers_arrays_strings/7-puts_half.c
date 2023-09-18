#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the null-terminated string.
 */

void puts_half(char *str)
{
	int length = 0;
	int start = 0;
	;
	if (str == NULL)
		return;


	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}


	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}

