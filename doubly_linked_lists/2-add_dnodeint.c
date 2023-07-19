#include "lists.h"
/**
 * add_dnodeint- adds a new node to the start of a doubly linked list of ints
 * @head: pointer to pointer head of list
 * @n: data for new node
 *
 * Return: address of new node or NULL for fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
