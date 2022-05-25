#include "lists.h"

/**
 * add_node_end - add new node in end of linked list list_t
 * @head: doouble-pointer to list list_t
 * str: string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *x;
int y;
list_t *a, *b;
a = malloc(sizeof(list_t));
if (a == NULL)
{
return (NULL);
}
x = strdup(str);
if (str == NULL)
{
return (NULL);
}
for (y = 0; str[y];)
{
y++;
}
a->str = x;
a->len = y;
a->next = NULL;
if (*head == NULL)
a = *head;
else
{
b = *head;
while (b->next != NULL)
{
b = b->next;
b->next = a;
}
}
return (*head);
}
