#include "lists.h"

/**
 * pop_listint - Deletes the head node of
 * a linked list
 * @head: Head of a list.
 *
 * Return: The head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
