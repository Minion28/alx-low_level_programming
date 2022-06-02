#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of file
 *@text_content: NULL terminated string to add at end of file
 *Return: 1 on success, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
int x;
int y;
if (!filename)
{
return (-1);
}
x = open(filename, OWRONLY | OAPPEND);
if (x == -1)
{
return (-1);
}
if (!text_content)
{
close(x);
return (1);
}
y = write(x, text_content, _strlen(text_content));
if (y == -1 || y != _strlen(text_content))
{
close(x);
return (-1);
}
close(x);
return (1);
}
