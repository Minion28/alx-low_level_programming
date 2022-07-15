#include "main.h"

/**
 * _strchr - character location
 * @s: memory
 * @c: byte
 * Return: a pointer when the character is found
 */
 
char *_strchr(char *s, char c)
{
int x = 0;

while (s[x] != '\0')
{
x++;
if (s[x] == c)
{
return (&s[x]);
}
}
return ('\0');
}
