#include "main.h"
/**
 * create_file - creates a file.
 * @filename: the file to create.
 * @text_content: the string to be written to the file.
 * Return: 1 or -1 if fails.
 */
int _strlen(const char *s)
{
	int a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
