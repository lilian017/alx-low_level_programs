#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -eturns the nth node of a listint_t linked list.
 * @index: index of node starting
 * @head: head pointer
 *
 * Return: nth node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
