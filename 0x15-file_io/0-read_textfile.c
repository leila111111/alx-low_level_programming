#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * or  number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fop, fre, fwr;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fop = open(filename, O_RDONLY);
	fre = read(fop, buf, letters);
	fwr = write(STDOUT_FILENO, buf, fwr);
	if (fop == -1 || fre == -1 || fwr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fop);
	return (fwr);
}
