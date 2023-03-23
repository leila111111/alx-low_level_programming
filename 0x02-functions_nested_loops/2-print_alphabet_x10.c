#include "main.h"
/**
 * print_alphabet_x10 -  printing 10 times the alphabet in lowercase
 * void function
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
return;
}
