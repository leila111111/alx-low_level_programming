#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: size of the element
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;
	return (pointer);
}
