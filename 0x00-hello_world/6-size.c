#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
        printf("Size of a char:x:%d byte,\n",sizeof(char));
	printf("Size of an int:%d byte,\n",sizeof(int));
	printf("Size of a long int:%d byte,\n",sizeof(long(int)));
	printf("Size of a long long int:%d byte,\n",sizeof(long(long(int))));
        return (0);
}
