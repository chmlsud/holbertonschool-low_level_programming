#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - Prints numbers of elements in the list
 * @h: List
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t thor;

	thor = 0;
	while (h != NULL)
	{
		h = h->next;
		thor++;
	}
	return (thor);
}
