#include "lists.h"

/**
 * get_nodeint_at_index - print elements of listint_t list
 * @head : head node
 * @index: index of node
 * Return: NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *z;
z = head;
if (head == NULL)
{
return (0);
}
z = head;
while (index != 0)
{
z = z->next;
index--;
}
if (z == NULL)
{
return (0);
}
return (z);
}
