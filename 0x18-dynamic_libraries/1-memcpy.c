#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: the memory area
 * @src: constant byte
 * @n: bytes from memory area
 * Return: a pointer to dest
 */
 
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
