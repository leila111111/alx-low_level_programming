#include <main.h>
/**
 * str_len - compute the length.
 * @s: string
 * Return: a
 */
int str_len(const char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add to the end of file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, str_len(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
