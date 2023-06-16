#include "lists.h"
/**
 * sum_dlistint - sum of the data values in the list.
 * @head: A pointer to the head of the list.
 * Return: sum or 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int sum = 0;

	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
