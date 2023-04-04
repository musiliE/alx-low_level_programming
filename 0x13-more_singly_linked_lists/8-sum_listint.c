#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked listint_t list.
 * @head: head of the list.
 * Return: sum of all the data (n) or 0 if it is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
