#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: first node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
