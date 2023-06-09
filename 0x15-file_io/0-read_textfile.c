#include "mainn.h"

/**
 * read_textfile - Function reads text file +  prints to the POSIX std output
 * @filename: Name of the file
 * @letters: Number of letters in text
 *
 * Return: number of letters read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_bytes, status;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	n_bytes = read(fd, buffer, letters);
	buffer[n_bytes] = 0;
	close(fd);

	if (n_bytes == 0)
	{
		free(buffer);
		return (0);
	}

	status = write(STDOUT_FILENO, buffer, n_bytes);
	free(buffer);

	return (status);
}
