#include "main.h"

/**
 * print_diagonal - print digonal
 * @n: input value
 *
 * Description: draws a diagonal line on the terminal
 * Return: Always (0)
 */

void print_diagonal(int n)
{
int x, y;

if (n > 0)
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
