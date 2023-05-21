#include <stdio.h>

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: numberone
 * @m: numbertwo
 * Return:the bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int expo;
	unsigned int count = 0;

	expo = n ^ m;
	while (expo > 0)
	{
		count += expo & 1;
		expo >>= 1;
	}

	return (count);
}
