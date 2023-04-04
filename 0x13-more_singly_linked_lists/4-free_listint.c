#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Head of a list.
 *
 * Return: Returns void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
