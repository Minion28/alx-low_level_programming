#include "lists.h"

/**
 * print_list - print all the elements of a list_t
 * @h: a singly linked list
 * Return: element
 */

size_t print_list(const list_t *h)
{
size_t elmt;
elmt = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
elmt++;
}
return (elmt);
}
