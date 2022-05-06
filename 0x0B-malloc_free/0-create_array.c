#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars, and initializes
 * it with a specific char
 * @size: size input
 * @c: input char
 * Return:pointer to array if true, null if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int = 0;
char *ar;
ar = (char *) malloc(size);
if (size == 0 || ar == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
