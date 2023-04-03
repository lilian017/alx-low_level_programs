#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that sums all the data
 * @ head: pointer to head
 *
 * Return: data sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{

		sum += head->n;
		head = head->next;
	}	return (sum);
}
