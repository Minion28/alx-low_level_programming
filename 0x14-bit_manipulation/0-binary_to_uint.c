#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number if there is more char, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int y;
y = 0;
if (!b)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
y = 2 * y + (b[x] - '0');
}
return (y);
}
