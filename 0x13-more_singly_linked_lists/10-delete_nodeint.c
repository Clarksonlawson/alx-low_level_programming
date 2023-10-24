#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);  /* List is empty, deletion failed */

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);  /* Node does not exist, deletion failed */

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

