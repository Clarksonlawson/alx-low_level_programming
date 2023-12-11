#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * consisting of only the characters in a given set
 * @s: The string to search
 * @accept: The set of characters to search for
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (found == 0)
			break;

		s++;
	}

	return (count);
}

