#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size
 * @c: character
 * Return: 0 or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;
	p = malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}


