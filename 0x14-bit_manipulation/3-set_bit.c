#include "main.h"
#include <stdio.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: unsigned long int number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);
	for (mask = 1; index > 0; mask *= 2)
	{
		*n += mask;
		index--;
	}

	return (1);
}
