#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on incorrect number of arguments, 2 on negative number of bytes.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *opcode_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcode_ptr = (char *)main;

	for (i = 0; i < num_bytes - 1; i++)
	{
		printf("%02hhx ", opcode_ptr[i]);
	}

	printf("%02hhx\n", opcode_ptr[num_bytes - 1]);

	return (0);
}

