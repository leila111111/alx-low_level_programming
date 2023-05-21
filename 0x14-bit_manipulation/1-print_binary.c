#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int var;
	int i ;
	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & var) != 0)
			printf("1");
		else
			printf("0");

		var >>= 1;
	}
}
