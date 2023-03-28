#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to enter
 * Return: nothing
 */
void rev_string(char *s)
{
	char stock;
	int i;
	int j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		stock = s[j];
		s[j] = s[i - 1];
		s[i - 1] = stock;
		i = i - 1;
	}
}
