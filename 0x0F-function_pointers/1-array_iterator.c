#include <stdio.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to an integer array.
 * @size: The size of the array.
 * @action: Pointer to a function.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
