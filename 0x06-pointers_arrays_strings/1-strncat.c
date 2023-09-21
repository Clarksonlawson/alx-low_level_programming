/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (ptr);
}

