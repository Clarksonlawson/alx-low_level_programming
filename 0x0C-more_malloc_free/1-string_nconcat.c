#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: a pointer to the concatenated string
 *         or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concatenated = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}

