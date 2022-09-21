#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses the contents of an array
 *@a: integer array to be reversed
 *@n: length of array a
 *Return: void
 */

void reverse_array(int *a, int n)
{
int j = 0, k;

n = n - 1;
while (j < n)
{
t = *(a + j);
*(a + j) = *(a + n);
*(a + n) = k;
j++;
n--;
}
}
