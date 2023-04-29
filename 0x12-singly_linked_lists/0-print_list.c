#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the listint_t list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
