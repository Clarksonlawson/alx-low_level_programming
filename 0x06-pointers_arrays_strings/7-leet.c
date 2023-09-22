/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_table[] = "aAeEoOtTlL";
	char leet_replacements[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_table[j]; j++)
		{
			if (str[i] == leet_table[j])
			{
				str[i] = leet_replacements[j / 2];
				break;
			}
		}
	}

	return (str);
}

