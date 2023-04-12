#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: NULL or p
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l, m = 0;
	char *p;
	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;
	p = (char *)malloc(i + j + 1);
	if (p == 0)
		return (NULL);
	if (s1)
	{
		while (l < i)
		{
			p[l] = s1[l];
			l++;
		}
	}

	if (s2)
	{
		while (l < (i + j))
		{
			p[l] = s2[m];
			m++;
			l++;
		}
	}
	p[l] = '\0';

	return (p);
}

