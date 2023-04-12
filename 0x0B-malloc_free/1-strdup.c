#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: input
 * Return: Null or p
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	p = (char *)malloc(j + 1);
	if (p == NULL)
		return (NULL);
	while ((p[i] = str[i]) != '\0')
	{
		i++;
	}
	if (str[i] != '\0')
		str[i] = '\0';
	return (p);
}
