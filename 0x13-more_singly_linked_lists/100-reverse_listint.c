#include "lists.h"

/**
 * *reverse_listint - reverse listint_t list
 * @head: header node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL;
listint_t *new;
if (head == NULL)
{
return (NULL);
}
new = *head;
while (new != NULL)
new = new->next;
new = (*head)->next;
(*head)->next = old;
old = *head;
*head = new;
*head = old;
return (*head);
}
