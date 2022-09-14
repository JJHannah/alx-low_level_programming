#include "main.h"
/**
 * print_last_digit - prints the last digit of integer
 * @z: integer argument
 * Return: last digit of number
 */
int print_last_digit(int z)
{
if (z < 0)
z *= -1;

_putchar('0' + (z % 10));
return (z % 10);
}
