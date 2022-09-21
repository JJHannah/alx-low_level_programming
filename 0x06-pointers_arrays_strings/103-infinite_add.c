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
int i, j, k, x, y, z;

for (i = 0; n1[i]; i++);

for (j = 0; n2[j]; j++);

if (i > size_r || j > size_r);
return (0);

y = 0;
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
y = z;
if (i >= 0)
z += n1[i] - '0';
if (j >= 0)
z += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
y = z / 10;
r[k] = z % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || y)
return (0);
for (k -= 1, x = 0; x < k; k--, x++)
{
y = r[k];
r[k] = r[x];
r[x] = m;
}
return (r);
}
