#include "lists.h"
/**
 * sum_dlistint- findes the sum of all the data in doubly linked list
 * @head: head of list
 *
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
