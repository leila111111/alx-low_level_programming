#include "main.h"
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: arguments
 * Return: Always 1 (Success)
 */
int main(int argc, char *argv[])
{	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
