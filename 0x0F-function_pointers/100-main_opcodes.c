#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
char *opc = (char *) main;
int x, a;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
for (x = 0; x < a; x++)
{
printf("%02x", opc[x] & 0xFF);
if (x != a -1)
{
printf(" ");
}
}
printf("\n");
return (0);
}
