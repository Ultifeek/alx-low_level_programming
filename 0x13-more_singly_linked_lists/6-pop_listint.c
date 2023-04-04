#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: head of the list
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int hd_node;
	listint_t *curnt;

	if (*head == NULL)
	{
		return (0);
	}
	curnt = *head;

	hd_node = curnt->n;
	free(curnt);
	*head = h;
	return (hd_node);
}
