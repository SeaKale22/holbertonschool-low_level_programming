#include "lists.h"
#include <stdio.h>

/**
 * print_list- prints all elements of a list_t list
 * @h: list to be printed
 *
 * Return: Number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}
