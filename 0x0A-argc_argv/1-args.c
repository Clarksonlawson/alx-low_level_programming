#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int divisor;

	(void)argv;

	count = argc - 1;

	/* Printing the count using _putchar */
	if (count >= 0)
	{
		if (count > 9)
		{
			divisor = 1;
			while (count / divisor > 9)
			{
				divisor *= 10;
			}

			while (divisor > 0)
			{
				_putchar((count / divisor) + '0');
				count %= divisor;
				divisor /= 10;
			}
		}
		else
		{
			_putchar(count + '0');
		}
	}

	_putchar('\n');

	return (0);
}

