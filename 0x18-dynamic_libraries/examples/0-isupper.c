#include "main.h"
#include <ctype.h>

/**
 * _isupper - Check uppercase letter
 * @c: int
 * Return: 1 if uppercase, other case 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
