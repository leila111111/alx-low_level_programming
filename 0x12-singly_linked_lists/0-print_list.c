#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	return (count);
}
