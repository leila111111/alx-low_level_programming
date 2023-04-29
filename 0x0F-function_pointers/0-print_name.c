#include <stdio.h>
/**
 * print_name - function printing  a name
 * @name: pointer to name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
