/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1); /* Character is a lowercase letter */
	}
	else
	{
		return (0); /* Character is not a lowercase letter */
	}
}

