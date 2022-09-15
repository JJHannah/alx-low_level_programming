#include "main.h"
#include <stdio.h>
/**
 * main -program computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
int sum;

sum = 0;
for (k = 0; k < 1024; k++)
{
if ((k % 3 == 0) || (k % 5 == 0))
{
sum += k;
}
}
printf("%d\n", sum);

return (0);
}
