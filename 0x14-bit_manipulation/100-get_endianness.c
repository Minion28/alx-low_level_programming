#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int a;
a = 1;
char *c = (char *) &a;
return ((int)*c);
}
