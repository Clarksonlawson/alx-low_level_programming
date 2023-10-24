#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
		return;  /* Nothing to free, or already NULL */

	/* Traverse the list and free each node */
	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	/* Set the head to NULL after freeing all nodes */
	*head = NULL;
}

