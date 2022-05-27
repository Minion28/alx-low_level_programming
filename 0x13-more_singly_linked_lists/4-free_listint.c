#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: header node
 * Return: 0
 */

void free_listint(listint_t *head)
{
listint_t *a;
while (head)
{
a = head;
head = head->next;
free(a);
}
free(head);
}
