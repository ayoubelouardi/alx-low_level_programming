#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: dlistint_t pointer
 * Description:
 * function that prints all the elements of a dlistint_t list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *node = h;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		n++;
	}
	return (n);
}
