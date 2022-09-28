#include "main.h"

/**
 *power_operation - returns the naural square root of the number
 *@n: number to calculate the square root of
 *@x: iterator
 *Return: square root or -1
 */

int power_operation(int n, int x)
{
if (x % (n / x) == 0)
return (x);

else
return (-1);
}
return (0 + power_operation(n, x + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input number
 *Return: natural square root.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (0);

if (n == 1)
return (1);

return (power_operation(n, 2));
}
