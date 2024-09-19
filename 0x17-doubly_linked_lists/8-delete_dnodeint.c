#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes node at index
 *
 * @head: pointer to the list.
 * @index: position of the node to delete.
 *
 * Return:
 * 1 if it succeeded
 * -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *f_node = *head;
	dlistint_t *d_node = *head;
	unsigned int idx;
	unsigned int cont = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = d_node->next;
		free(d_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	idx = index - 1;
	while (f_node && cont != idx)
	{
		cont++;
		f_node = f_node->next;
	}

	if (cont == idx && f_node)
	{
		d_node = f_node->next;
		if (d_node->next)
		d_node->next->prev = f_node;
		f_node->next = d_node->next;
		free(d_node);
		return (1);
	}

	return (-1);
}
