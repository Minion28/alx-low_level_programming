#include "lists.h"

/**
 * free_listint2 - free listint_t list
 * @head: header node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
listint_t *a;
if (head == NULL)
{
return;
}
for (; *head != NULL;)
{
a = (*head)->next;
free(*head);
*head = a;
}
head = NULL;
}
