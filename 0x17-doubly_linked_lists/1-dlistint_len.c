#include <stddef.h>
#include "lists.h"


/**
 * dlistint_len - return n of elements in l-list
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t n = 0;

	while (node)
	{
		node = node->next;
		n++;
	}

	return (n);
}
