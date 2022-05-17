#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print a string then a new line
 * @separator: printed string between the strings
 * @n: no. of strings passed to a fucntion
 * @...: variable no. of strings to be printed
 * Return: nothing when separator is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
char *str;
unsigned int x;
va_start(s, n);
for (x = 0; x < n; x++)
{
str = va_arg(s, char *);
if (str == NULL)
printf("Nil");
else
printf("%s", str);
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}
