/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* Character is an alphabetic letter */
	}
	else
	{
		return (0); /* Character is not an alphabetic letter */
	}
}

