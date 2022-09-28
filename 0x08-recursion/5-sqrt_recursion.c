#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to calculate the square root of
 *Return: int
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 *square - find square root
 *@n: int to find square root
 *@num: square root
 *Return: int
 */

int square(int n, int num)
{
if (num * num == n)
return (num);

else if (num * num < n)
return  (square(n, num + 1));
else
return (-1);
}
