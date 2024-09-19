#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 *
 * @head: pointer to the list.
 * @index: the index of the node, starting from 0.
 *
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int n = 0;

	while (node && n != index)
	{
		n++;
		node = node->next;
	}
	if (node && n == index)
		return (node);
	return (NULL);
}
