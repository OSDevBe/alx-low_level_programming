#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 *
 * @filename: nptr to file name
 *
 * @text_content: string NULL terminated
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;
	ssize_t sz;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		sz = write(file, text_content, len);
	}

	close(file);

	if (sz == -1)
		return (-1);
	return (1);
}
