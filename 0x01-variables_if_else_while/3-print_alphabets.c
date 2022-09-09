#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char z;

z = 'a';
while (z <= 'x')
{
putchar(z);
z++;
}
z='A';
while (z <='X')
{
putchar(z);
z++;
}
putchar('\n');
return (0);
}
