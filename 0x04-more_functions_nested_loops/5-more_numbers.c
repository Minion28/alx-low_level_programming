#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: Always (0)
 */

void more_numbers(void)
{
int n, i, a;

for (a = 0; a < 10; a++)
{
for (n = 0; n <= 1; n++)
{
for (i = 0; i <= 9; i++)
{
if (!(n == 1 && i >= 5))
{
if (i)
_putchar(i + '0');
_putchar(n + '0');
}
}
}
_putchar('\n');
}
}
