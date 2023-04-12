#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: NULL or p
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = (char *)malloc(i + j + 1);
	if (p == 0)
		return (NULL);
	if (s1)
	{
		while (l < i)
		{
			s3[l] = s1[l];
			l++;
		}
	}

	if (s2)
	{
		while (m < (i + j))
		{
			s3[m] = s2[l];
			m++;
			l++;
		}
	}
	s3[m] = '\0';

	return (s3);
}

