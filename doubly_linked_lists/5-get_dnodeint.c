#include "lists.h"
/**
 * get_dnodeint_at_index- retuns node of doubly linked list at given index
 * @head: head of list
 * @index: index of wanted node
 *
 * Return: the wanted node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
