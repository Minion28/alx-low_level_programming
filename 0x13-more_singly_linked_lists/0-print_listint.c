#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h: the pointer of the list
 * Return: the no. of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t p = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
p++;
}
return (p);
}
