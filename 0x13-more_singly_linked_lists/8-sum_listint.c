#include "lists.h"

/**
 * sum_listint - sum of all data in listint_int list
 * @head: head node
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
int count = 0;
while (head != NULL)
{
count += head->n;
head = head->next;
}
return (count);
}
