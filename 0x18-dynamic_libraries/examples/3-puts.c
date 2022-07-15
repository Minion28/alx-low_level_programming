#include "main.h"

/**
 * _puts - updates the value it points to 98
 * @str: character value.
 */
 
void _puts(char *str)
{
int x;

for (x = 0; str[x] != 0; x++)
_putchar(str[x]);
_putchar('\n');
}
