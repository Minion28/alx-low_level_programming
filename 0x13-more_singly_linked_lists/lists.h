#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);


size_t num(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * num - Counts the no. of nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
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

#endif
