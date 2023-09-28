/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (0); /* Not a palindrome */
		}
	}

	return (1); /* Palindrome */
}

