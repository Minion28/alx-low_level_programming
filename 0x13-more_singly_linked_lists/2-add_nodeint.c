#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of listint_t list
 * @head: head node
 * @n: input value no.s
 * Return: address of new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *x = malloc(sizeof(listint_t));
if (!head || !x)
{
return (NULL);
}
x->n = n;
x->next = NULL;
if (*head)
{
x->next = *head;
}
*head = x;
return (x);
}
