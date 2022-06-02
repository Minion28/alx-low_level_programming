#include "main.h"
/**
 * main - copy content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
int x, y, z, a, b;
char c[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
x = open(argv[1], O_RDONLY);
if (x < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
y = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
while ((z = read(x, c, 1024)) > 0)
{
if (y < 0 || (write(y, c, z) != z))
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
}
if (z < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
a = close(x);
if (a < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", x), exit(100);
}
b = close(y);
if (b < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", y), exit(100);
}
return (0);
}
