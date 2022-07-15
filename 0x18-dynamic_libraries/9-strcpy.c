#include "main.h"

/**
 * _strcpy - copy a string.
 * @dest : value
 * @src  : value
 *
 *Return: return the pointer to desk.
 */
 
char *_strcpy(char *dest, char *src)
{
int x;

for (x = 0; src[x] != '\0'; x++)
dest[x] = src[x];
dest[x] = '\0';
return (dest);
}
