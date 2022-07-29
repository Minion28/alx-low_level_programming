#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to a.
 * Return: The calculated a.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int a;
	int b;

	a = 5381;
	while ((b = *str++))
	{
		a = ((a << 5) + a) + b; /* a * 33 + b */
	}
	return (a);
}
