#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the input string
 *
 * Return: (NULL) if str == NULL or str == "",
 * or a pointer to an array
 *         of strings (words) with the last element being NULL
 */
char **strtow(char *str)
{
	int i, j, k;
	int word_count = 0;
	char **words;
	char in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
	}

	if (word_count == 0)
		return (NULL);

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
			i++;

		j = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;

		words[k] = (char *)malloc((i - j + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (; j < i; j++)
			words[k][j - i] = str[j];
		words[k][j - i] = '\0';
	}

	words[word_count] = NULL;

	return (words);
}

