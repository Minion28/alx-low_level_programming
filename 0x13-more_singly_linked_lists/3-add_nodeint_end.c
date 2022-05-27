#include "lists.h"

/**
 * *add_nodeint_end - function that adds node at end of listint_t list list
 * @head: head node
 * @n: input node no.s
 * Return: address of new element, NULL i failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h;
listint_t *t;
h = malloc(sizeof(listint_t));
if (h == NULL)
{
return (NULL);
}
h->next = NULL;
h->n = n;
if (*head == NULL)
{
return (h);
*head = h;
}
else
{
t = *head;
while (t->next)
{
t = t->next;
}
t->next = h;
}
return (h);
}
