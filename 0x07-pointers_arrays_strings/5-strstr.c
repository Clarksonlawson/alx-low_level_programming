/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to locate
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if not found
 */
#include <stddef.h>
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

