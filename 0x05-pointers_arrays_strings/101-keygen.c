#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random password generator
 * Return: 0
 */

int main(void)
{
char a[100];
int x, y, z;
y = 0;
z = 0;
srand(time(NULL));
while (y < 2465)
{
x = rand() % 122;
if (x > 32)
{
a[z++] = x;
y += z;

}
}
a[z++] = (2772 - y);
a[z] = '\0';
printf("%s", a);
return (0);
}
