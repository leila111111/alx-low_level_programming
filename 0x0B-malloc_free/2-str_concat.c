#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: NULL or p
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
		k++;
	while (s2[l] != '\0')
		l++;

	p = malloc(sizeof(char) * (k + l + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < k)
		{
			p[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (k + l))
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	p[i] = '\0';

	return (p);
}

