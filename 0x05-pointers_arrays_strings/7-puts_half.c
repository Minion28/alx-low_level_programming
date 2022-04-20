#include "main.h"

/**
 * puts_half: print half
 * @str: input string
 * Description: prints half of a string
 * Return: 0
 */

void puts_half(char *str)
{
int i;
int diff;
i = 0;
while (str[i] != '\0')
{
i++;
}
diff = (i + 1) / 2;
for (i = diff ; srt[i]; i++)
{
_putchar (srt[i]);
}
_putchar ('\n');
}
