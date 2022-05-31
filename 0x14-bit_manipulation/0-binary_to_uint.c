#include "main.h"

/**
 * unsigned int binary_to_uint(const char *b) - convert
 *binary no. to an unsigned int
 * @b: string
 * Return: converted number, 0 if:-
 * there is one or more chars in string b that is not 0or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
int a;
int x;
unsigned int num;
num = 0;
a = 1;
x = 0;
while (b[x + 1])
{
if (b[x] != '0' && b[x] != '1')
{
return (0);
x++;
}
}
while (x >= 0)
{
num += ((b[x] - '0') * a);
a *= 2;
x--;
}
if (b == NULL)
{
return (0);
}
return (num);
}
