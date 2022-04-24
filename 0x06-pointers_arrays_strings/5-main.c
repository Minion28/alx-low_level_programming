#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
char a[] = "look up!\n";
char *p;

p = string_toupper(a);
printf("%s", p);
printf("%s", a);
return (0);
}
