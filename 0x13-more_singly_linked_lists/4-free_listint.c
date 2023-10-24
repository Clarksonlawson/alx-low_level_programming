#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next_node;

	/* Traverse the list and free each node */
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}

