#include "lists.h"
#include <stdlib.h>

/** add_nodeint_end - function adds a enew node at the end
 * @n: constan int
 * @head: head to the double pointer
 *
 * Return: new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr
		if (head == NULL)
			return (NULL);
	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = NULL;
	if (*head == NULL);
	{
		return (first);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = first;
	return (first)
}
