#include "main.h"

/**
 * create_file - creates file and write @text_content
 *
 * @filename: ptr to file name
 *
 * @text_content: string NULL terminated
 *
 * Return: 1 (SUCCESS) OR -1 (ERROR)
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, len);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}
