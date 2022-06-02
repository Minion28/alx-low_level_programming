#include "main.h"

/**
 * read_textfile - read a textfile and print to POSIX std output
 * @filename: name if the file
 * @letters: letters read and printed
 * Return: actual no. of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int x;
int y;
int z;
char *a;
a = malloc(sizeof(char) * letters);

if (!filename)
{
return (0);
}

x = open(filename, O_RDONLY);
if (x < 0)
{
return (0);
}

if (!a)
{
return (0);
}

y = read(x, a, letters);
if (y < 0)
{
free(a);
return (0);
}

a[y] = '\0';
close(x);
z = write(STDOUT_FILENO, a, y);
if (z < 0)
{
free(a);
return (0);
}

free(a);
return (z);
}
