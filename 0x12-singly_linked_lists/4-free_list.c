#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: head
 * Return: NULL
 */

void free_list(list_t *head)
{
list_t *x;
while ((x = head) != NULL)
{
head = head->next;
free(x->str);
free(x);
}
}

