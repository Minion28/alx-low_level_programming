#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: index as from 0
 * Return: 1 if it works, -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
