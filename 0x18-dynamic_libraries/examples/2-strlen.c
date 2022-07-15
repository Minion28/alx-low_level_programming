#include "main.h"

/**
 * _strlen - length of string.
 * @s: character.
 *Return: x value
 */
int _strlen(char *s)
{
int x;

for (x = 0; s[x] != 0; x++)
;
return (x);
}
