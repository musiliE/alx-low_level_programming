#include "lists.h"

/**
 * free_listint - frees a linked listint_t list.
 * @head: head of the list.
 * Return: no return.
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
