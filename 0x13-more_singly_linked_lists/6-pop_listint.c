#include "lists.h"

/**
 * po_listint - deletes head node of lisint_t list
 * @head: head node
 * Return: head node and 0 when linked list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *a;
int x;
if (*head == NULL)
{
return (0);
}
x = (*head)->n;
a = (*head);
(*head) = (*head)->next;
free(a);
return (x);
}
