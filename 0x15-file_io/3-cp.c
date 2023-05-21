#include "main.h"
/**
 * print_error - printing error
 * @file: the file
 * @i: the value of error
 * Return: nothing
 */
void print_error(char *file, int i)
{
	if (i == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (i == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}
/**
 * main - Copies the content of one file to another file.
 * @argc: The number of arguments.
 * @argv: An array of argument.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(argv[1], 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(argv[2], 99);
	while ((bytes_read = read(fd_from, buffer, 1024)) != 0)
	{
		if (bytes_read == -1)
			print_error(argv[1], 98);
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error(argv[2], 99);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
