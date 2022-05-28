#include "lists.h"

/**
 * size_t print_listint_safe - print listint_t linked list
 * @head: head node
 * Return no. of nodes in list, exit 98 when function fails
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *a;
const listint_t *x;
size_t b  = 0;
size_t z;
a = head;
x = head;
while (a != NULL)
{
printf("[%p] %d\n", (void *) a, a->n);
b++;
if (x != NULL)
{
x = x->next;
a = slow->next;
}
if (a == x)
{

}
}
}
