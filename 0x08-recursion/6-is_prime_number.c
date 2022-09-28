#include "main.h"

/**
 *is_prime_number - says if an integer is a prime number or not
 *@n: number to evaluate
 *Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
int start = n / 2;
if (n <= 1)
return (0);

return (is_prime(n, start));
}

/**
 *is_prime - check if prime
 *@n: number to evaluate
 *@start: number to start checking from
 *Return: 1 if n is prime, 0 if not
 */

int is_prime(int n, int start)
{
if (start <= 1)
return (1);

else if (n % start == 0)
return (0);

return (is_prime(n, start - 1));
}
