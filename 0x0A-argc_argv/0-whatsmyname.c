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
	 char *name;
	 (void)argc;


	name = argv[0];

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}

	_putchar('\n');

	return (0);
}

