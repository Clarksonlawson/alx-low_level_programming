/**
 * _strncpy - Copies at most n bytes from source string to destination string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (ptr);
}

