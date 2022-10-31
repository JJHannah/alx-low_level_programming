#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int total = 0;
int len, x;
int decval = 1;

if (!b)
return (0);

for (len = 0; b[len] != '\0'; len++)
;
x = (len - 1);
for (; x >= 0; x--)
{
if (b[x] != '0' && b[x] != '1')
return (0);

if (b[x] == '1')
total += decval;
decval *= 2;
}
return (total);
}
