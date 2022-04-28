#include "main.h"
/**
 * strlen_recursion - return the length of a string
 *
 * @s: string input
 * Description: return the length of a string
 * Return: string length
 */

int strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}