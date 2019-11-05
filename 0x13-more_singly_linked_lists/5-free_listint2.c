#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - Free the list
 * @head: head of the list.
 * Return: Return void
 */
void free_listint2(listint_t **head)
{
	listint_t *var1;

	while (var1)
	{
		var1 = var1->next;
		free(*head);
		*head = var1;
	}
	*head = NULL;
}
