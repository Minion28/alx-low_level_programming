#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: the number of bytes
 */
 
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
int x = 0;
int j = 0;

while (s[x] != '\0')
{
while (accept[j] != '\0')
{
if (accept[j] == s[x])
{
count++;
}
j++;
}
j = 0;
x++;
if (s[x] == ' ')
{
break;
}
}
return (count);
}
