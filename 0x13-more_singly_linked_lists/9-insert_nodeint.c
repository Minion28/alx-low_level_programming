#include "lists.h"

/**
 *insert_nodeint_at_index - insert a new node at a specific point
 *@head: head node
 *@idx: new node index
 *@n: new node integer
 *Return: NULL when not possible to add new node at index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *a;
listint_t *x = *head;
unsigned int z;
a = malloc(sizeof(listint_t));
if (a == NULL)
{
return (NULL);
a->n = n;
}
if (idx == 0)
{
a->next = x;
*head = a;
return (a);
}
for (z = 0; z < (idx - 1); z++)
if (x == NULL || x->next == NULL)
{
return (NULL);
x = x->next;
}
a->next = x->next;
x->next = a;
return (a);
}
