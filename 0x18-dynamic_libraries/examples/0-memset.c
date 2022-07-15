#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: pointer
 * @n: memory bytes
 * @b: constant byte
 * Return: the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
s[x] = b;
x++;
}
return (s);
}
