#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tem;
	listint_t *curnt;

	if (head != NULL)
	{
		curnt = *head;
		while ((tem = curnt) != NULL)
		{
			curnt = curnt->next;
			free(tem);
		}
		*head = NULL;
	}
}

