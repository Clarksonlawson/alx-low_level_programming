/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the characters to include in the prefix
 *
 * Return: number of bytes in the initial segment of s that consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0; /* Reset the found flag for each character in s */

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			return (count);
		}

		count++;
	}

	return (count);
}

