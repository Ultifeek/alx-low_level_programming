#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a
 * listint_t linked list
 * @head: head of the list
 * @index: the node index
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
