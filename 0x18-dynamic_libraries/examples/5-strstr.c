#include "main.h"

/**
 * _strstr - locating a substring
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of a substring
 */
 
char *_strstr(char *haystack, char *needle)
{
int x;
int j;

for (x = 0; haystack[x] != '\0';)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[x + j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[x]);
}
x++;
}
return ('\0');
}
