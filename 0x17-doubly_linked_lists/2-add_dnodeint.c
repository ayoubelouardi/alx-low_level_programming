#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint - add node at the beginning
 * @head: pointer to the first element.
 * @n: the number.
 * Return:
 * address of the new element
 * NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
