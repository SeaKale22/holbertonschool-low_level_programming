#include "lists.h"
/**
 * delete_dnodeint_at_index- deletes node of list at index
 * @head: pointer to ponter to head
 * index: index of deleted node
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next_node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		dlistint_t *tmp = *head;

		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	next_node = current->next->next;
	free(current->next);
	current->next = next_node;
	if (next_node != NULL)
		next_node->prev = current;
	return (1);
}
