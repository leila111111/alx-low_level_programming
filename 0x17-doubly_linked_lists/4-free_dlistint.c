#include "lists.h"
/**
 * free_dlistint - free the list.
 * @head: A pointer to the head of the list.
 * Return: void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
