#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_listint - function that prints all elements of a listint_t list
 * listint_t: the list of elements
 * @h: pointer to list
 *
 * Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while ( h != NULL)
	{
		printf("%d\n", h->n);
		h = h-> next;
		count++;
	}
	return (count);
}
