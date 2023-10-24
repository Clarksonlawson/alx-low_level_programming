#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the list and accumulate the sum */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

