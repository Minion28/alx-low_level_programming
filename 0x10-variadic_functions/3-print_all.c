#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Print char
 * @arg: arguments pointing to the character to be printed.
 */

void print_char(va_list arg)
{
char c;
c = va_arg(arg, int);
printf("%c", c);
}

/**
 * print_int - Print int
 * @arg: arguments pointing to the integer to be printed.
 */
void print_int(va_list arg)
{
int b;
b = va_arg(arg, int);
printf("%d", b);
}

/**
 * print_float - Print float
 * @arg: arguments pointing to the float to be printed.
 */
void print_float(va_list arg)
{
float b;
b = va_arg(arg, double);
printf("%f", b);
}

/**
 * print_string - Print a string
 * @arg:arguments pointing to the string to be printed.
 */
void print_string(va_list arg)
{
char *a;
a = va_arg(arg, char *);
if (a == NULL)
{
printf("(Nil)");
return;
}
printf("%s", a);
}

/**
 * print_all - print anything then a new line
 * @format: character strings
 * @...: A variable no. of arguments to be printed.
 *
 * return: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
va_list x;
int z = 0, y = 0;
char *separator = "";
print_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};
va_start(x, format);
while (format && (*(format + z)))
{
y = 0;
while (y < 4 && (*(format + z) != *(funcs[y].p)))
y++;
if (y < 4)
{
printf("%s", separator);
funcs[y].prints(x);
separator = ", ";
}
z++;
}
printf("\n");
va_end(x);
}
