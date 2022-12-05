#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, read_from, write_to;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);

	buffer = create_buffer(argv[1]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);

	read_from = read(from, buffer, 1024);
	if (read_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);

	write_to = write(to, buffer, read_from);
	if (write_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);

	close_file(from);
	close_file(to);

	free(buffer);

	return (0);
}

/**
 * create_buffer - Creates a buffer to hold the contents of a file.
 * @file: The name of the file to read.
 *
 * Return: A pointer to the buffer.
 *
 * Description: If the file cannot be opened or read - exit code 98.
 *              If the file cannot be closed - exit code 100.
 */

char *create_buffer(char *file)
{
	int fd, read_file;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);

	fd = open(file, O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);

	read_file = read(fd, buffer, 1024);
	if (read_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);

	close_file(fd);

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Description: If the file cannot be closed - exit code 100.
 */

void close_file(int fd)
{
	int close_file;

	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
