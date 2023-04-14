#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *pointer;

	if (min > max)
		return (NULL);
	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		pointer[i] = min + i;
	return (pointer);
}
