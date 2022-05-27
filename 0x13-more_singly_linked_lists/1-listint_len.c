#include "lists.h"

/**
 *listint_len - return no. of elements in a linked lisint_t list
 * @h: the pointer to the list
 *Return: no. of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
long unsigned int e = 0;
while (h)
{
e++;
h = h->next;
}
return (e);
}
