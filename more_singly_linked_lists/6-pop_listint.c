#include "lists.h"
/**
 * pop_listint- deleates head node of list
 * @head: head node
 *
 * Return: head node's dats or 0
 */
int pop_listint(listint_t **head)
{
	int tempno;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	tempno = (*head)->n;
	temp = *head;
	*head =(*head)->next;
	free(temp);
	return(tempno);
}
