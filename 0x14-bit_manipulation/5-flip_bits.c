#include "main.h"

/**
 * flip_bits - number of bits needed to flip to get another number
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits needed to flip to get from one numberto another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int a;
for (a = 0; n || m; n >>= 1, m >>= 1)
if ((n & 1) != (m & 1))
{
a++;
}
return (a);
}
