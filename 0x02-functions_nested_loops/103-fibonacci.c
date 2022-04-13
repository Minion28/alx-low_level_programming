#include <stdio.h>

/**
 * main - prints the sum of eleven valued fibonacci sequence
 * terms not exceeding 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, sum;
float tot_sum;

while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;

if ((sum % 2) == 0)
tot_sum += sum;

fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", tot_sum);

return (0);
}
