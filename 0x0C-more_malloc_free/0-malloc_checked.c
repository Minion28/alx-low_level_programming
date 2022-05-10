#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked- allocate memory using malloc
 * @b: input character
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *Pointer;
Pointer = malloc(b);
if (!Pointer)
{
exit(98);
}
return (Pointer);
}
