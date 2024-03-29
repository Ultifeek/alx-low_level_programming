#include "lists.h"

/**
 * free_listint - that frees a listint_t list
 * @head: head of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tem;

	while ((tem = head) != NULL)
	{
		head = head->next;
		free(tem);
	}
}
