#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees listint_t list
 * @head: head pointer to pointer
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
}
