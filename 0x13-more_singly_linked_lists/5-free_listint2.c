#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Head of a list.
 *
 * Return: Returns void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
