#include "main.h"

/**
 * mul - multiplies two integers - returns the check
 * @a: first integer
 * @b: second integer
 * Return: mul
 */
int mul(int a, int b)
{
	int mul;
	
	if ((a > 0 && b > 0) || (a < 0 && b < 0)
	{
		mul = a*b;
	}
	if ((a > 0 && b < 0) || (a < 0 && b > 0)
	{
		mul = -a*b;
	}
	return (mul);
}
