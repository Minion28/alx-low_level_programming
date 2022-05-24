#include "lists.h"

/**
 * add_node - add a new node in the list_t list
 * @head: first node
 * @str: last node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nod;
nod = malloc(sizeof(list_t));
if (nod == NULL)
{
return (NULL);
}
nod->str = strdup(str);
nod->len = strlen(str);
nod->next = *head;
*head = nod;
return (nod);
}

/**
 *_ strlen- print length of s string
 * @str: string
 * Return: length of the string
 */

int _strlen(const char *str)
{
int x;
x = 0;
while (str[x] != '\0')
{
x++;
}
return (x);
}
