#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given position
 *
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Description: function that inserts a new node at a given position.
 *
 * Return:
 * the address of the new node
 * NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *f_node = *h, *n_node;
	unsigned int index, cont = 0;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	if (idx == 0)
	{
		n_node->prev = NULL;
		n_node->next = *h;
		if (*h)
			(*h)->prev = n_node;
		*h = n_node;
		return (*h);
	}

	index = idx - 1;
	while (f_node && cont != index)
	{
		cont++;
		f_node = f_node->next;
	}

	if (cont == index && f_node)
	{
		n_node->prev = f_node;
		n_node->next = f_node->next;
		if (f_node->next)
			f_node->next->prev = n_node;
		f_node->next = n_node;
		return (n_node);
	}

	free(n_node);
	return (NULL);
}
