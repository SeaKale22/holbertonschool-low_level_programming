#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end- adds a new node to end of linked list
 * @head: head of list
 * @str: string to be added
 *
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	int strlen = 0;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		strlen++;
	}
	new_node->len = strlen;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
