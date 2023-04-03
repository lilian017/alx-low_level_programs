#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint -adds a new node at the beginning
 * @n: const int
 * @head: head of double pointer
 *
 * Return new node and NULL in case of failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	
	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
