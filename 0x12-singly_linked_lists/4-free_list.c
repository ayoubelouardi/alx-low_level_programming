#include "lists.h"

/**
 * free_list - free single list link
 * @head: pointer to the first node of the list
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
