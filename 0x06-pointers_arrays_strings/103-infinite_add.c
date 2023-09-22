#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0;

	while (n1[i] != '\0' || n2[j] != '\0' || carry)
	{
		int num1 = (n1[i] != '\0') ? (n1[i] - '0') : 0;
		int num2 = (n2[j] != '\0') ? (n2[j] - '0') : 0;
		int sum = num1 + num2 + carry;

		if (size_r <= 0)
			return (0);

		r[i] = (sum % 10) + '0';
		carry = sum / 10;

		if (n1[i] != '\0')
			i++;
		if (n2[j] != '\0')
			j++;
		size_r--;
	}
	r[i] = '\0';

	if (size_r == 0 && (n1[i] != '\0' || n2[j] != '\0' || carry))
		return (0);

	return (r);
}

