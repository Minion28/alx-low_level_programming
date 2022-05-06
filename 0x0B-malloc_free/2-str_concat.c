#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - concanate 2 strings
 * @s1: first input string
 * @s2: second input string
 * Return: NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
int s1_len, s2_len, x, y;
char *str;
if (s1 == NULL)
{
s1 = "";
}
else if (s2 == NULL)
{
s2 = "";
}
for (s1_len = 0; s1[s1_len] != '\0\; s1_len++)
continue;
for (s2_len = 0; s2[s2_len] != '\0\; s2_len++)
continue;
str = malloc(s1_len + s2_len + 1);
if (str == NULL)
{
return (NULL);
}
x = 0;
while (x < s1_len)
{
str[x] = s1[x];
x++;
}
y = 0;
while (i < (s1_len + s2_len))
{
str[x] = s2[j];
x++;
y++;
}
str[x] = '\0';
return (str);
}
