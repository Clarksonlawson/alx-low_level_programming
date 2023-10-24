#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);  /* Empty list, return 0 */
	}

	/* Save the data from the head node */
	data = (*head)->n;

	/* Move the head to the next node */
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

