/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
	if (!s || !accept)
		return (NULL);

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}

		s++;
	}

	return (NULL);
}

