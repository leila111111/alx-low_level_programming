#include "main.h"
/**
 * print_sign - function printing the sign of a number
 *@i: the number we will check
 *Return: 0 (if result equal to zero) 1 (if positive result) -1 (negative result)
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
