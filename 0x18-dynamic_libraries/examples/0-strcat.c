#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: dest
 */
 
char *_strcat(char *dest, char *src)
{
int a = 0;
int b;

while (dest[a] != 0)
{
a++;
}

b = 0;

while (src[b] != 0)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}
