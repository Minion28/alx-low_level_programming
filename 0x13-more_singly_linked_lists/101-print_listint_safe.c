#include "lists.h"

size_t num(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * num - Counts the no. of nodes
 * @head: head node
 * Return: 0 when not looped
 */
size_t num(const listint_t *head)
{
const listint_t *u, *m;
size_t x = 1;

if (head == NULL || head->next == NULL)
return (0);
u = head->next;
m = (head->next)->next;
while (m)
{
if (u == m)
{
u = head;
while (u != m)
{
x++;
u = u->next;
m = m->next;
}
u = u->next;
while (u != m)
{
x++;
u = u->next;
}
return (x);
}
u = u->next;
m= (m->next)->next;
}

return (0);
}



/**
 * print_listint_safe - print listint_t linked list
 * @head: head node
 * Return: no. of nodes in list, exit 98 when function fails
 */

size_t print_listint_safe(const listint_t *head)
{
size_t x;
long unsigned int a = 0;
x = num(head);
if (x == 0)
{
for (; head != NULL; x++)
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
else
{
for (a = 0; a < x; a++)
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
return (x);
}
