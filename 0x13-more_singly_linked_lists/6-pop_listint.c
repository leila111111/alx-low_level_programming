#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node's data
 * @head: double pointer to the head of the linked list
 * Return: the head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
