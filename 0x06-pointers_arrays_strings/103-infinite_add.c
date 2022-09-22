#include "main.h"
#include <stdio.h>

/**
 *infinite_add - adds two numbers
 *@n1: first number
 *@n2: second number
 *@r: buffer for result
 *@size_r: buffer size
 *Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k, x, y, z, add = 0;

while (*(n1 + i) != '\0')
i++;

while (*(n2 + j) != '\0')
j++;
if (i >= j)
x = i;
else
x = j;
if (size_r <= x + 1)
return (0);
r[x + 1] = '\0';
i--, j--, size_r--;
y = *(n1 + i)-48, z = *(n2 + j)-48;
while (x >= 0)
{
k = y + z + add;
if (k >= 10)
add = k / 10;
else
add = 0;
if (k > 0)
*(r + x) = (k % 10) + 48;
else
*(r + x) = '0';
if (i > 0)
i--, y = *(n1 + i)-48;
else
y = 0;
if (j > 0)
j--, z = *(n2 + j)-48;
else
z = 0;
x--, size_r--;
}
if (*(r) == '0')
 return (r + 1);
else
  return (r);
}
