#include "main.h"

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */
int is_separator(char c)
{
	/* Define word separators */
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;

	for (int i = 0; str[i]; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32; /* Convert to uppercase */
			}
			capitalize_next = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32; /* Convert to lowercase */
			}
		}
	}

	return (str);
}

