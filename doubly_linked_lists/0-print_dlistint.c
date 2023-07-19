#include "lists.h"
/**
 * print_dlistint- prints all elements of a doubly linked list of ints
 * @h: head of list
 *
 * Return: Number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
