/**
 * is_divisible - Check if n is divisible by a divisor.
 * @n: The integer to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (divisor == 1)
		return (0);

	if (n % divisor == 0)
		return (1);
	if (divisor * divisor > n)
		return (0);

	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (n > 1 && !is_divisible(n, 2));
}

