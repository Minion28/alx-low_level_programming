#include "main.h"

/**
 * _atoi - convert a string to integer.
 *@s : value.
 * Return: n.
 */
 
int _atoi(char *s)
{
int x;
int n = 0;
int test = 1;

for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == ' ')
x++;
if (s[x] == '-')
test = -test;
if (s[x] >= '0' && s[x] <= '9')
n = (10 * n) +test * (s[x] - '0');
else if (n)
break;
}
return (n);
}
