#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 *
 * @filename: ptr to file name
 *
 * @letters: nmbr of char
 *
 * Return: nmbr of char can read and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (file == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (wr);
}
