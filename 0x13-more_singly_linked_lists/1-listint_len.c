#include "lists.h"
#include <stdio.h>

/**
 * listint_len - numberr of elements in the list.
 * @h: head of the linkedlist node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
