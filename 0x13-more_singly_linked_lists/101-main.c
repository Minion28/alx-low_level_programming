#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *x;
    head2 = NULL;
    add_xint(&head2, 0);
    add_xint(&head2, 1);
    add_xint(&head2, 2);
    add_xint(&head2, 3);
    add_xint(&head2, 4);
    add_xint(&head2, 98);
    add_xint(&head2, 402);
    add_xint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    x = add_xint(&head, 0);
    add_xint(&head, 1);
    add_xint(&head, 2);
    add_xint(&head, 3);
    add_xint(&head, 4);
    x->next = add_xint(&head, 98);
    add_xint(&head, 402);
    add_xint(&head, 1024);
    print_listint_safe(head);
    return (0);
}
