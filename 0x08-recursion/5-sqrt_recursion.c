#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to calculate the square root of
 * Return: int
 */
int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (n);
return (_sqrt_(0, n));
}

/**
 *_sqrt_ - finds square root
 *@n: tests the number
 *@i: square root
 *Return: int
 */

int square(int n, int i)
{
if (n > i / 2)
return (-1);

else if (n * n == i)
return  (n);

return (_sqrt_(n + 1, i));
}
