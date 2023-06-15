#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the n node of  list.
 * @head: A pointer to the head of list.
 * @index: The index of the node
 * Return: A pointer to the n node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int counter = 0;

	while (list != NULL)
	{
		if (counter == index)
			return (list);
		list = list->next;
		counter++;
	}
	return (NULL);
}
