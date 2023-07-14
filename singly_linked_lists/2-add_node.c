#include "lists.h"
#include <string.h>
/**
 * add_node- adds new node to beginning
 * @head: beginning of list
 * @str: string to be duplicated
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int strlen = 0;
	int i = 0;

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
		return(NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		strlen++;
	}
	new_node->len = strlen;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
