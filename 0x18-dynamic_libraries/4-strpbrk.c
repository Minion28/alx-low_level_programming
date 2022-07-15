#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: a pointer to the byte that matches one of the bytes
 */
 
char *_strpbrk(char *s, char *accept)
{
int x = 0;
int j;

while (s[x] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[x] == accept[j])
{
return (s + x);
}
j++;
}
x++;
}
return (0);
}
