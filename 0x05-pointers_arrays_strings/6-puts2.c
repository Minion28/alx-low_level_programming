#include "main.h"

/**
 * puts2 - print character
 * @str: input string
 *
 * Description: prints character of a string, starting with the first character
 */

void puts2(char *str)
{
int i;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
i++;
}
