#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: pointer
 *
 * Return: Nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *the_node;
	dlistint_t *next_node;

	if (head)
	{
		the_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(the_node);
			the_node = next_node;
			next_node = next_node->next;
		}
		free(the_node);
	}
}
