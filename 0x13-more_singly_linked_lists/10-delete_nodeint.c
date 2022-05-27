#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of listint_t list
 * @head: head node
 * @index: where node is deleted
 * Return: 1 if succeed, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *old;
listint_t *new;
unsigned int x;
old = *head;
if (index != 0)
{
for (x = 0; x < (index - 1) && old != NULL; x++)
old = old->next;
}
if (old == NULL || (old->next == NULL && index != 0))
{
return (-1);
}
new = old->next;
if (index != 0)
{
old->next = old->next;
free(old);
}
else
{
*head = new;
free(old);
}
return (1);
}
