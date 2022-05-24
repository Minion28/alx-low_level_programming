#include "lists.h"

/**
 * list_len - prints number of elements in a linked list_t list
 * @h:  elements
 * Return: no. of the elements
 */

size_t list_len(const list_t *h)
{
int x = 0;
while (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
