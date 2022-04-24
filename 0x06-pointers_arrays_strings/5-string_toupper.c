#include "main.h"

/**
 * string_toupper - uppercase strings
 * @a: input string
 * Description:  changes all lowercase letters of a string to uppercase
 * Return: always (0)
 */

char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != '\0'; ++i)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}
return (a);
}
