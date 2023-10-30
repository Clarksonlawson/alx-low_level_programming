#include "main.h"

/**
 * copy_file - Copies the content of one file to another
 * @from_fd: Source file descriptor
 * @to_fd: Destination file descriptor
 *
 * Return: (1) on success, (-1) on failure
 */
int copy_file(int from_fd, int to_fd)
{
	ssize_t read_result, write_result;
	char buffer[1024];

	while ((read_result = read(from_fd, buffer, 1024)) > 0)
	{
		write_result = write(to_fd, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
			return (-1);
	}

	if (read_result == -1)
		return (-1);

	return (1);
}

/**
 * main - Copies the content of one file to another
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: (0) on success, (97/98/99/100) on failure
 */
int main(int ac, char **av)
{
	int from_fd, to_fd;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	if (copy_file(from_fd, to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(from_fd);
		close(to_fd);
		exit(99);
	}

	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}

