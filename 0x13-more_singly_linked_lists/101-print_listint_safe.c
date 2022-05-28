#include "lists.h"

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
