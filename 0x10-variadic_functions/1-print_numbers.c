#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print a no. then a new line
 * @separator: string
 * @n: no. of intergers passed to a function
 * @...: variable no. of printed no.s
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list x;
unsigned int a;
va_start(x, n);
for (a = 0; a < n; a++)
{
printf("%d", va_arg(x, int));
if (a != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(x);
}
