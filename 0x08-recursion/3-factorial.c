#include "main.h"
/**
 * factorial - print the factorial of a number
 * @n: input factorial number
 * Description: return factorial of the given number
 * Return: factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
