#include "lists.h"
/**
 * free_dlistint- frees a doubly linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
