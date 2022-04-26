include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: bytes filled
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	*(dest + i) = *(src + i);

return (dest);
}
