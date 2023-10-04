#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: (NULL) if ac == 0 or av == NULL, or a`
 * pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++; /* for newline character after each argument */
	}

	concatenated = malloc((len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k++] = av[i][j];
		}
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}

