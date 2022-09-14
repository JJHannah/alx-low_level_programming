#include "main.h"
/**
 * print_last_digit - prints the last digit of integer
 * @z: integer argument
 * Return: last digit of number
 */
int print_last_digit(int z)
{
int x;
if (z < 0)
z = -z;
x = z % 10;

if (x < 0)
x = -x;

_putchar(x + '0');
return (x);
}
