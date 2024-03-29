#include "lists.h"
/**
 * dlistint_len- finds number of elements in a doubly linked list
 * @h: head of list
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
