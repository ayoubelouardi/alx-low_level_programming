#include "lists.h"

/**
 * sum_dlistint - returns the sum of dlistint_t list
 *
 * @head: pointer to the list.
 * Description: function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 *
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
