#include "main.h"

/**
 * print_prev - print reverse
 * @s: input string
 *
 * Description: prints a string, in reverse
 * Return: 0
 */
void print_rev(char *s)
{
int left, len, l;
len = 0;
left = 0;
for (l = 0; s[l] != '\0'; ++l)
{
len = l;
}
for (; len >= left; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
