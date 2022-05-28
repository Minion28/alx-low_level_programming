#include "lists.h"

/**
 * print_listint_safe - print listint_t linked list
 * @head: head node
 * Return: no. of nodes in list, exit 98 when function fails
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t **x = NULL;
size_t a;
size_t z = 0;
while (head != NULL)
for (a = 0; a < z; a++)
if (head == x[a])
{
printf("->[%p] %d\n", (void *)head, head->n);
free(x);
return (z);
}
z++;
x = _e(x, z, head);
printf("->[%p] %d\n", (void *)head, head->n);
head = head->next;
free(x);
return (z);
}
