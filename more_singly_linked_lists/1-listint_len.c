#include "lists.h"
#include <stdio.h>
/**
 * listint_len- finds number of elements in list
 * @h: head of list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
