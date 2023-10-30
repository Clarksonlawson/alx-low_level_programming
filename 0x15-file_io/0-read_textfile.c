#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_result, write_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_result = read(fd, buffer, letters);
	close(fd);

	if (read_result == -1)
	{
		free(buffer);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, read_result);
	free(buffer);

	if (write_result == -1 || write_result != read_result)
		return (0);

	return (read_result);
}

