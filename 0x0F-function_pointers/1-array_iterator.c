#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to an integer array.
 * @size: The size of the array.
 * @action: Pointer to a function that takes an integer argument and returns void.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
