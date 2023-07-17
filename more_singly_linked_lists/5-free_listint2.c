#include "lists.h"
/**
 * free_listint2- frees a list, sets head to NULL
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		listint_t *current = *head;
		listint_t *next;
		*head = NULL;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
}
