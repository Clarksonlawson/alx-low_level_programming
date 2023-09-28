/**
 * calc_length - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int calc_length(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + calc_length(str + 1));
}

/**
 * compare_chars - Compares characters from the beginning and end of a string.
 * @str: The string to compare.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: (1) if the characters match, (0) otherwise.
 */
int compare_chars(char *str, int start, int end)
{
	if (start >= end)
		return (1); /* Palindrome reached the middle */

	if (str[start] != str[end])
		return (0); /* Not a palindrome */

	return (compare_chars(str, start + 1, end - 1)); /* Continue comparing */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: (1) if @s is a palindrome, (0) otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;

	len = calc_length(s);

	if (len <= 1)
		return (1); /* An empty string or a single character is a palindrome */

	return (compare_chars(s, 0, len - 1)); /* Check if it's a palindrome */
}

