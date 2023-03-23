#include "main.h"
/**
 * print_last_digit -  function that printing the last digit of a number
 * @i: this is the  number  we will check
 * Return: a (positive number)
 */
int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}
