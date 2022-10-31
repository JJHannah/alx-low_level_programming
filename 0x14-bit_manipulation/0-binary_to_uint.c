#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int len = 0, x;
unsigned int sum = 0;

if (b == NULL)
return (sum);

while (b[len] != '\0')
len++;

len -= 1;

x = 0;
while (b[x])
{
if ((b[x] != '0') && (b[x] != '1'))
return (sum);

if (b[x] == '1')
sum += (1 * (1 << len));
x++;
len--;
}
return (sum);
}
