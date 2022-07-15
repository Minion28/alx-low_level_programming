#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of iterations
 * Return: dest
 */
 
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b;
while (dest[a] != 0)
{
a++;
}
b = 0;
while (src[b] != 0 && b < n)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}
