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
for (i = 0; i <= 1; i++)
{
for (n = 0; n <= 9; n++)
{
if (!(i == 1 && j >= 5))
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
