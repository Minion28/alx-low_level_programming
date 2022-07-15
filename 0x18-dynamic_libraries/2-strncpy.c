#include "main.h"
/**
 * _strncpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 *
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}

x = x;
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
