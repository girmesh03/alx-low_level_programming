#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add at the end of the file
 * Return: If the function fails or filename is NULL -1
 * 			if the file does not exist the user lacks write permissions -1
 * 			otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
